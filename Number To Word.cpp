#include <iostream>
#include <string>
using namespace std;

string num(int starting){
	int length=to_string(starting).length();
	string place[]={" "," "," hundred "," thousand "," ten thousand "," hundred thousand "," million "," ten million "," hundred million "," billion "};
	string ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
	string tens[]={"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	string wrd="";
	int arr[length];
	for(int i=length-1;i>=0;i--){
    	arr[i] = starting % 10;
    	starting /= 10;
	}
	for(int i=length-1;i>=0;i--){
		wrd=ones[arr[i]]+place[length-i-1]+wrd;
	}
	return wrd;
}

int main(){
	int starting=6969;
	cout<<"Enter your number.\n";
	cin>>starting;
	cout<<num(starting);
	return 0;
}
