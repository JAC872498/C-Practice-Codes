#include <iostream>
#include <string>
using namespace std;

string num(int starting){
	int length=to_string(starting).length();
	string place[]={" "," "," hundred "," thousand "," thousand "," hundred thousand "," million "," million "," hundred million "," billion "};
	string ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
	string tens[]={"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	string wrd="";
	int arr[length];
	for(int i=length-1;i>=0;i--){
    	arr[i] = starting % 10;
    	starting /= 10;
	}
	for(int i=length-1;i>=0;i--){
		if(length-i-1==1||length-i-1==4||length-i-1==7){
			wrd=tens[arr[i]]+place[length-i-1]+wrd;
		}else{
			wrd=ones[arr[i]]+place[length-i-1]+wrd;
		}
	}
	return wrd;
}

int main(){
	int starting=123456789;
	cout<<"Enter your number.\n";
	cin>>starting;
	cout<<num(starting);
	return 0;
}
