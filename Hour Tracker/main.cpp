#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream wages,hours;
	int wage,hour=0,total=0,choice=0;
	hours.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	hours>>wage;
	while(choice!=5){
		std::cout<<"(1)Check info\n(2)Change Wage\n(3)Add Hours\n(4)Remove Hours\n(5)Exit\n";
		std::cin>>choice;
	}
	return(0);
}