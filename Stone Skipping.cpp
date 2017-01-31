#include <iostream>
using namespace std;

bool full(double arr[]){//true if full of full meter jumps
	for(int x=0;x<sizeof(arr)/sizeof(arr[0]);x++){
		if(arr[x]!=1){
			return false;
		}
	}
	return true;
}

int main(){
    cout<<"x";
	int river=2;//river length
	int rocks=(river*2)+1;
	double jumps[river*2];
	double total=0;
	double currentJump;
	int jumpNum=0;
	int count=1;
	for(int x=0;x<river*2;x++){//starting off with all .5 meter jumps
		jumps[x]=0.5;
	}
	while(true){
		if(full(jumps)){//stops when full of 1 meter jumps
			goto stop;
		}else{//replaces .5 meter jumps with 1 meter jumps
			count+=1;
			currentJump=jumps[jumpNum];
			for(int x=0;x<sizeof(jumps)/sizeof(jumps[0]);x++){
				for(int y=x;y<sizeof(jumps)/sizeof(jumps[0]);y++){
					count+=1;
					if(y==0||y+1==x){
						jumps[y]=1;
					}else{
						jumps[y]=1;
						jumps[y-1]=0;
					}
					jumps[x]=1;
				}
			}
		}
	}
	stop:
	cout<<count;
	return 0;
}
