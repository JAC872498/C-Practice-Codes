#include <iostream>
#include <vector>


bool is5(std::vector<double> arr){
	for(int x=0;x<=arr.size();x++){
		if(arr[x]==0.5){
			return true;
		}
	}
	return false;
}

int main(){//for(int z=0;z<(sizeof(jumps)/sizeof(jumps[0]));z++){cout<<jumps[z]<<"\n";}cout<<"\n";
	int river=2;//river length
	int rocks=(river*2)+1;
	std::vector<double> jumps;
	double total=0;
	int curr=0;
	int jumpNum=0;
	int count=1;
	for(int x=0;x<river*2;x++){//starting off with all .5 meter jumps
		jumps.assign(x,0.5);
	}
	jumps[jumps.size()]=0.5;
	for(int z=0;z<=jumps.size();z++){std::cout<<jumps[z]<<"\n";}std::cout<<"\n";
	while(true){
		for(int x=curr;x<=jumps.size();x++){
			total=0;
			for(int z=0;z<=jumps.size();z++){total+=jumps[z];}
			if(total==river){	
				count++;
			}
			if(x==curr){
				jumps[curr]=1;
				jumps[jumps.size()-x]=0;
				for(int z=0;z<=jumps.size();z++){std::cout<<jumps[z]<<"\n";}std::cout<<"\n";
			}else{
	 			jumps[x]=1;
			   	jumps[x-1]=0.5;
			   	for(int z=0;z<=jumps.size();z++){std::cout<<jumps[z]<<"\n";}std::cout<<"\n";
			}
		}
		jumps[curr]=1;
		curr++;
		if(!is5(jumps)) goto stop;
	}
	stop:
	std::cout<<count;
	return 0;
}
