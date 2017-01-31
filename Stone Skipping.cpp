#include <iostream>
using namespace std;

bool full(double e[]){//true if full of full meter jumps

}

int main(){
	double river=2;
	int rocks=(river*2)+1;
	double jumps[river*2];
	double total=0;
	for(int x=0;x<river*2;x++){
		jumps[x]=0.5;
	}
	while(true){
		if(full(jumps[])){
			goto stop;
		}
	}
	int count=1;
	stop:
	cout<<count;
	return 0;
}
