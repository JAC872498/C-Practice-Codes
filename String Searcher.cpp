/*I made a string search that I probably over complicated, and also probably spent too much time on. So enjoy it
Takes 2 string(a and b)searches for the smaller in the larger string.*/

#include <iostream>
using namespace std

int main(){
	string a,b,newWrd;///a and b are the strings given by user to search/be searched
	int tot;//amount of times one string shows up in the other
	cin>>a>>b;
	string FileMeasure=a;//turning string a into an array
	int TempNumOne=FileMeasure.size();
	char Aarr[100];
	for (int a=0;a<=TempNumOne;a++){
    	Aarr[a]=FileMeasure[a];
	}
	string FileMeasure2=b;//turning string b into an array
	int TempNumOne2=FileMeasure2.size();
	char Barr[100];
	for (int a=0;a<=TempNumOne2;a++){
    	Barr[a]=FileMeasure2[a];
	}
	
	if(a.length()>b.length()){//searching for b in a
		for(int x=0;x<=a.length()-b.length();x++){
			for(int n=x;n<x+b.length();n++){//getting a chunk of a the length of b
				newWrd=newWrd+Aarr[n];
			}
			if(newWrd==b){//adding to tot if the chunk is equal to b
				tot=tot+1;
			}
			newWrd="";//reseting the code chunk	
		}
		cout<<b<<" is found in "<<a<<" "<<tot<<" time(s)";
	}else if(b.length()>a.length()){//searching for a in b
		for(int x=0;x<=b.length()-a.length();x++){
			for(int n=x;n<x+a.length();n++){//getting a chunk of b the length of a
				newWrd=newWrd+Barr[n];
			}
			if(newWrd==a){//adding to tot if the chunk if equal to a
				tot=tot+1;
			}
			newWrd="";//reseting the code chunk
		}
		cout<<a<<" is found in "<<b<<" "<<tot<<" time(s)";
	}else{//both a and b are the same
		if(a==b){
			cout<<"They're the same string.";
		}
	}
}
