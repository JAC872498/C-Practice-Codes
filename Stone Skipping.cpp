#include <iostream>
using namespace std;

int main(){
	int river=3;//river length
	int rocks=(river*2)+1;
	double jumps[river*2];
	double total=0;
	double currentJump;
	int jumpNum=0;
	int count=1;
	for(int x=0;x<river*2;x++){//starting off with all .5 meter jumps
		jumps[x]=0.5;
	}
	for(int x=0;x<(sizeof(jumps)/sizeof(jumps[0]))-1;x++){
		if(x==0){
			jumps[0]=1;
			jumps[(sizeof(jumps)/sizeof(jumps[0]))-x-1]=0;
			for(int y=0;y<(sizeof(jumps)/sizeof(jumps[0]));y++){cout<<jumps[y]<<"\n";}cout<<"\n";
		}else{
			jumps[x]=1;
			jumps[x-1]=0.5;
			for(int y=0;y<(sizeof(jumps)/sizeof(jumps[0]));y++){cout<<jumps[y]<<"\n";}cout<<"\n";
		}
		for(int y=x+1;y<(sizeof(jumps)/sizeof(jumps[0]));y++){
			count++;
		}
	}
	cout<<count;
	return 0;
}
