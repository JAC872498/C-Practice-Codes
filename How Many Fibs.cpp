/**/

#include <iostream>
#include <vector>

int main(){
	int startRagne=0,endRange=0;
	std::cout<<"Enter your starting and ending numbers.\n";
	std::cin>>startRagne>>endRange;
	std::vector <int> fibs;
	fibs.push_back(0);
	fibs.push_back(1);
	while(fibs[fibs.size()-1]<=endRange){
		system.out.print(fibs[fibs.size()-1]);
		fibs.push_back(fibs[fibs.size()-1]+fibs[fibs.size()-2]);
	}
	return 0;
}
