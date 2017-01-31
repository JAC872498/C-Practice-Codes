#include <iostream>
using namespace std;

bool full(double arr[]){//true if full of full meter jumps
	for(int x=0;x<e.length;x++)[
		if(arr[x]!=1){
			return false;
		}
	}
	return true;
}

int main(){
	double river=2;//river length
	int rocks=(river*2)+1;
	double jumps[river*2];
	double total=0;
	double currentJump;
	for(int x=0;x<river*2;x++){//starting off with all .5 meter jumps
		jumps[x]=0.5;
	}
	while(true){
		if(full(jumps[])){//stops when full of 1 meter jumps
			goto stop;
		}else{//replaces .5 meter jumps with 1 meter jumps
			currentJump=jumps[0];
			while(currentJump!=1){
			
			}
		}
	}
	int count=1;
	stop:
	cout<<count;
	return 0;
}
