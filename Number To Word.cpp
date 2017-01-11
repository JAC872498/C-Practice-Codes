//This takes a number up to 9,999,999,999 and returns it in word form, dosn't work when you go above the billions 
#include <iostream>
#include <string>
using namespace std;

string num(int starting){
	int length=to_string(starting).length();
	string place[]={" "," "," hundred "," thousand "," "," hundred "," million "," "," hundred "," billion "};
	string ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
	string tens[]={"","onety","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	string wrd="";
	int arr[length];
	for(int i=length-1;i>=0;i--){//Turning the number into an array
    		arr[i] = starting % 10;
    		starting /= 10;
	}
	for(int i=length-1;i>=0;i--){//replacing the # with a word
		if(length-i-1==1||length-i-1==4||length-i-1==7){//This decideds if it should be in the ones or the tens
			wrd=tens[arr[i]]+place[length-i-1]+wrd;
		}else{
			wrd=ones[arr[i]]+place[length-i-1]+wrd;
		}
	}
	return wrd;
}

int main(){
	int starting=696969;
	cout<<"Enter your number.\n";
	cin>>starting;
	cout<<num(starting);
	return 0;
}
