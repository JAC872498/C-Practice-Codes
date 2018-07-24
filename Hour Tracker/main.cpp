#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream wages,hours;
	int wage,hour=0,total=0;
	hours.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	std::cout<<"(1)Check info\n(2)Change Wage\n(3)Add Hours\n(4)Remove Hours";
	hours>>wage;
	std::cout<<"\n"<<wage<<"\n";
	hours>>hour;
	std::cout<<hour;
	return(0);
}