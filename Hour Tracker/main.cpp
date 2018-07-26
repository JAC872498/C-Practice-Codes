#include <iostream>
#include <fstream>
#include <vector>

#include <algorithm>
#include <iterator>

using namespace std;

int hrTMnt(int hour){//Hours to minutes
	int mins=0;
	mins+=((hour/100)*60);
	mins+=(hour%100);
	return(mins);
}

int mntTHr(int min){//Minutes to hours
	
}

void display_vector(const vector<int> &v)
{
    std::copy(v.begin(), v.end(),
        std::ostream_iterator<int>(std::cout, " "));
}

int main(){
	ifstream fls;
	vector<int> hours,dates;
	int wage,fileNum,h=0,total=0,choice=0;
	
	fls.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Hours.txt");
	fls>>wage;
	while(fls>>fileNum){
		hours.push_back(fileNum);
		if(h%2==1){
			total+=(hrTMnt(hours[h])-hrTMnt(hours[h-1]));
		}
		h+=1;
	}
	fls.close();
	
	fls.open("C:\\Users\\Dell\\CCodes\\Hour Tracker\\Dates.txt");
	while(fls>>fileNum){
		dates.push_back(fileNum);
	}
	fls.close();
	
	while(choice!=5){
		cout<<"\n(1)Check info\n(2)Change Wage\n(3)Add Hours\n(4)Remove Hours\n(5)Exit\n";
		cin>>choice;
		if(choice==1){
			cout<<"Wage: $"<<(wage/100)<<"."<<(wage%100)<<"\n";
			cout<<"Total Hours: "<<(total/60.0)<<"\n";
			cout<<"Total Amount Owed: $"<<(((total/60.0)*wage)/100)<<"\n";
			cout<<"Start	Stop	Hours	Date"<<"\n";
			cout<<"_____________________________"<<"\n";
			for(int n=0;n<hours.size();n+=2){
				cout<<hours[n]<<"	"<<hours[n+1]<<"	"<<(hrTMnt(hours[n+1])-hrTMnt(hours[n]))<<"	";
				cout<<dates[(n/2)*3]<<"-"<<dates[(n/2)*3+1]<<"-"<<dates[(n/2)*3+2]<<"\n";
			}
		}else if(choice==2){
			cout<<"Enter new wage.\n";
			cin>>wage;
		}else if(choice==3){
			cout<<"Enter starting hours.\n";
			
		}else if(choice==4){
			
		}else if(choice!=5){
			cout<<"\n(1)Check info\n(2)Change Wage\n(3)Add Hours\n(4)Remove Hours\n(5)Exit\n";
		   	cin>>choice;
		}
	}
	return(0);
}