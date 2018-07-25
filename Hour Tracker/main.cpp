#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	ifstream hrs;
	vector<int> hours;
	int wage,hour,total=0,choice=0;
	hrs.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	hrs>>wage;
	while(hrs>>hour){
		hours.push_back(hour);
	}
	while(choice!=5){
		cout<<"(1)Check info\n(2)Change Wage\n(3)Add Hours\n(4)Remove Hours\n(5)Exit\n";
		cin>>choice;
		if(choice==1){
			
		}else if(choice==2){
			cout<<"Enter new wage.\n";
			cin>>wage;
		}else if(choice==3){
			cout<<"Enter starting hours.\n";
			
		}else if(choice==4){
			
		}
	}
	return(0);
}