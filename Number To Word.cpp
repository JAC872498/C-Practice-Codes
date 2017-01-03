#include <iostream>
using namespace std;

string num(int starting){
	string ones[]={"zero","one","two","three","four","five","six","seven","eight","nine",};
	string wrd="";
	return ones[starting];
}

int main() {
	int starting=6;
	cout<<"Enter your number.\n";
	cin>>starting;
	cout<<num(starting);
	return 0;
}
