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

std::vector<double> stuff(std::vector<double> arr, int curr){
	for(int x=0;x<arr.size();x++){
		arr.assign(x,0.5);
	}
	for(int x=0;x<=curr;x++){
		arr.assign(x,1);
		arr.assign(arr.size()-x-1,0);
	}
	return arr;
}

int main(){//for(int z=0;z<(sizeof(jumps)/sizeof(jumps[0]));z++){cout<<jumps[z]<<"\n";}cout<<"\n";
	int river=3;//river length
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
		//jumps=stuff(jumps,curr);
		jumps.assign(jumps.size()-1,0);
		if(!is5(jumps)) goto stop;
	}
	stop:
	std::cout<<count;
	return 0;
}




#include <iostream>
#include <vector>

bool has5(std::vector<double> arr){
	for(int x=0;x<=arr.size();x++){
		if(arr[x]==0.5){
			return true;
		}
	}
	return false;
}

int main(){//for(int z=0;z<river*2;z++){std::cout<<jumps[z]<<"\n";}std::cout<<"\n";
	int river=3;//river length
	int count=0;
	std::vector<double> jumps;
	for(int x=0;x<=river*2;x++){
		jumps.assign(x,0.5);
	}
	for(int n=0;n<river;n++){
		for(int x=0;x<jumps.size();x++){
			count++;
			if(x==1){
				 jumps[x-1]=0;
				jumps[x]=1;
			}else if(x>=2){
				jumps[x-2]=0.5;
				jumps[x-1]=0;
				jumps[x]=1;
			}
			for(int z=0;z<river*2;z++){std::cout<<jumps[z]<<"\n";}std::cout<<"\n";
		}
	}
	std::cout<<count;
	return 0;
}
