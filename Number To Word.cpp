#include <iostream>
using namespace std;

string num(starting){
	string wrd="";
	if(starting==0){
		cout>>"zero";
	}else if(starting==1){
		cout>>"one";
	}else if(starting==2){
		cout>>"two";
	}else if(starting==3){
		cout>>"three";
	}else if(starting==4){
		cout>>"four";
	}else if(starting==5){
		cout>>"five";
	}else if(starting==6){
		cout>>"six";
	}else if(starting==7){
		cout>>"seven";
	}else if(starting==8){
		cout>>"eight";
	}else{
		cout>>"nine";
	}
	return 0;
}

int main() {
	int starting=69;
	cout<<"Enter your number.\n";
	cin>>starting;
	cout<<num(starting);
}
