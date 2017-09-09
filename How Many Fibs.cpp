/**/

#include <iostream>
#include <vector>

int main(){
	int startRagne=0,endRange=0,tot=0;
	std::cout<<"Enter your starting and ending numbers.\n";
	std::cin>>startRagne>>endRange;
	std::vector <int> fibs;
	fibs.push_back(0);
	fibs.push_back(1);
	while(fibs[fibs.size()-1]<=endRange){
		fibs.push_back(fibs[fibs.size()-1]+fibs[fibs.size()-2]);
	}
	for(int n=0;n<fibs.size();n++){
		if(fibs[n]>=startRagne&&fibs[n]<=endRange){
			std::cout<<fibs[n]<<"\n";
			tot+=1;
		}
	}
	std::cout<<"There are "<<tot<<" total fibonnaci numbers inbetween those numbers.";
	return 0;
}
