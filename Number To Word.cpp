#include <iostream>
#include <string>
using namespace std;

string num(int starting){
	int length=to_string(starting).length();
	string place[]={" one"," ten"," hundred"," thousand"," ten thousand"," hundred thousand"," million"," ten million"," hundred million"," billion"};
	string wrd="";
	int arr[length];
	for(int i=length-1;i>=0;i--){
    	arr[i] = starting % 10;
    	starting /= 10;
	}
	for(int i=length-1;i>=0;i--){
		wrd=to_string(arr[i])+place[length-i-1]+"\n"+wrd;
	}
	return wrd;
}

int main() {
	/*int starting=12345;
	cout<<"Enter your number.\n";
	cin>>starting;*/
	cout<<num(1234);
	return 0;
}
