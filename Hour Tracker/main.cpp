#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream wage,hours;
	wage.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Wage.txt");
	hours.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	int total=0;
	std::cout<<"(1)Check info\n(2)Change Wage\n(3)Add Hours\n(4)Remove Hours";
	return(0);
}
