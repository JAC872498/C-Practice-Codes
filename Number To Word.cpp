#include <iostream>
#include <string>
using namespace std;

int num(int starting){
	/*string ones[]={"zero","one","two","three","four","five","six","seven","eight","nine",};
	string wrd="";
	return num[0];*/
	int arr[to_string(starting).length()];
	for (int i=to_string(starting).length()-1;i>=0;i--) {
    	arr[i] = starting % 10;
    	starting /= 10;
	}
	return arr[0];
}

int main() {
	/*int starting=12345;
	cout<<"Enter your number.\n";
	cin>>starting;*/
	cout<<num(1234);
	return 0;
}
