#include <iostream>
#include <fstream>
#include <vector>

#include <algorithm>
#include <iterator>

using namespace std;

void display_vector(const vector<int> &v)
{
    std::copy(v.begin(), v.end(),
        std::ostream_iterator<int>(std::cout, " "));
}

int main(){
	ifstream hrs;
	vector<int> hours;
	vector<int> dates;
	int n=0,wage,hour,total=0,choice=0;
	hrs.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	hrs>>wage;
	while(hrs>>hour){
		n+=1;
		//if(n%3==0){
		//	dates.push_back(hour);
		//}else{
			hours.push_back(hour);
		//}
	}
	display_vector(hours);
	//display_vector(dates);
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