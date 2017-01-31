#include <iostream>
using namespace std;

int main(){
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
	for(int x=0;x<sizeof(jumps)/sizeof(jumps[0]);x++){
		if(x=0){
			jumps[x]=1;
			jumps[sizeof(jumps)/sizeof(jumps[0])-x-1]=0;
		}else{
			jumps[x]=1;
			jumps[x-1]=0.5;
			jumps[sizeof(jumps)/sizeof(jumps[0])-x-1]=0;
		}
		for(int y=x+1;y<y+1;y++){
			count+=1;
			if(jumps[y]==0){
				break;
			}
		}
	}
		for(int y=x;y<jumps.length;y++){
			count+=1;
			if(y==0||y+1==x){
				jumps[y]=1;
			}else{
				jumps[y]=1;
				jumps[y-1]=0;
			}
			jumps[x]=1;
		}
	}*/
	cout<<count;
	return 0;
}
