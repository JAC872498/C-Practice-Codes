/*I made a string search that I probably over complicated, and also probably spent too much time on. So enjoy it
Takes 2 string(a and b)searches for the smaller in the larger string.*/

#include <iostream>
using namespace std

int main() {
	string a,b,newWrd;
	int tot;
	cin>>a>>b;
	string FileMeasure=a;
	int TempNumOne=FileMeasure.size();
	char Aarr[100];
	for (int a=0;a<=TempNumOne;a++){
    	Aarr[a]=FileMeasure[a];
	}
	string FileMeasure2=b;
	int TempNumOne2=FileMeasure2.size();
	char Barr[100];
	for (int a=0;a<=TempNumOne2;a++){
    	Barr[a]=FileMeasure2[a];
	}
	
	if(a.length()>b.length()){//Searching for b in a
		for(int x=0;x<=a.length()-b.length();x++){
			for(int n=x;n<x+b.length();n++){
				newWrd=newWrd+Aarr[n];
			}
			if(newWrd==b){
				tot=tot+1;
			}
			newWrd="";	
		}
		cout<<b<<" is found in "<<a<<" "<<tot<<" time(s)";
	}else if(b.length()>a.length()){//Searching for a in b
		for(int x=0;x<=b.length()-a.length();x++){
			for(int n=x;n<x+a.length();n++){
				newWrd=newWrd+Barr[n];
			}
			if(newWrd==a){
				tot=tot+1;
			}
			newWrd="";
		}
		cout<<a<<" is found in "<<b<<" "<<tot<<" time(s)";
	}else{//Both a and b are the same
		if(a==b){
			cout<<"They're the same string.";
		}
	}
}