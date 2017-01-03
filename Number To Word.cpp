#include <iostream>
#include <string>
using namespace std;

string num(int starting){
	string place[]={"ten million","million","hundred thousand","ten thousand",thousand","hundred","ten","one"};
	string wrd="";
	int arr[to_string(starting).length()];
	for (int i=to_string(starting).length()-1;i>=0;i--) {
    	arr[i] = starting % 10;
    	starting /= 10;
	}.
	return to_string(arr[0])+"a";
}

int main() {
	/*int starting=12345;
	cout<<"Enter your number.\n";
	cin>>starting;*/
	cout<<num(1234);
	return 0;
}
