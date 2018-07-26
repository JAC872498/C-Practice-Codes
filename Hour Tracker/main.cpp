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
	ifstream fls;
	vector<int> hours,dates;
	int wage,n,total=0,choice=0;
	
	fls.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	fls>>wage;
	while(fls>>n){
		hours.push_back(n);
	}
	fls.close();
	
	fls.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Dates.txt");
	while(fls>>n){
		dates.push_back(n);
	}
	fls.close();
	
	display_vector(hours);
	cout<<"\n";
	display_vector(dates);
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