#include <iostream>
using namespace std;

bool full(double arr[]){
	for(int x=0;x<(sizeof(arr)/sizeof(arr[0]));x++){
		if(arr[x]==0.5){
			return false;
		}
	}
	return true;
}

int main(){//for(int z=0;z<(sizeof(jumps)/sizeof(jumps[0]));z++){cout<<jumps[z]<<"\n";}cout<<"\n";
	int river=2;//river length
	int rocks=(river*2)+1;
	double jumps[river*2];
	double total=0;
	int curr=0;
	int jumpNum=0;
	int count=2;
	for(int x=0;x<river*2;x++){//starting off with all .5 meter jumps
		jumps[x]=0.5;
	}
	while(true){
		for(int x=curr;x<(sizeof(jumps)/sizeof(jumps[0]))-1;x++){
			count++;
			if(x==curr){
				jumps[curr]=1;
				jumps[(sizeof(jumps)/sizeof(jumps[0]))-x-1]=0;
				for(int z=0;z<(sizeof(jumps)/sizeof(jumps[0]));z++){cout<<jumps[z]<<"\n";}cout<<"\n";
			}else{
	 			jumps[x]=1;
			   	jumps[x-1]=0.5;
			   	for(int z=0;z<(sizeof(jumps)/sizeof(jumps[0]));z++){cout<<jumps[z]<<"\n";}cout<<"\n";
			}
		}
		jumps[curr]=1;
		curr++;
		if(full(jumps)) goto stop;
	}
	stop:
	cout<<count;
	return 0;
}
