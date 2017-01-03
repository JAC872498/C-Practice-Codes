#include <iostream>
using namespace std;

string num(starting){
	string ones[]={"zero","one","two","three","four","five","six","seven","eight","nine",};
	string wrd="";
	cout<<ones[starting];
	return 0;
}

int main() {
	int starting=69;
	cout<<"Enter your number.\n";
	cin>>starting;
	cout<<num(starting);
}
