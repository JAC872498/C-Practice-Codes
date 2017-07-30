/**/

#include <iostream>

bool allCrossed(bool* crossed,int members){
	for(int x=0;x<members;x++){
		if(crossed[x]==false) return false;
	}return true;
}

int main(){
	int members,group=3,totalTime=0,t=0;
	std::cin>>members;
	if(members==0){
		std::cout<<0;
		return 0;
	}
	int paces[members];
	bool crossed[members];
	for(int x=0;x<members;x++){
		std::cin>>paces[x];
		crossed[x]=false;
	}
	if(members==1){
		std::cout<<paces[0];
		return 0;
	}
	while(!allCrossed(crossed,members)){
		if(t==0){//2 fastest cross, fastest goes back
			totalTime+=paces[1];
			crossed[1]=true;
			crossed[0]=true;
			t+=1;
			std::cout<<paces[0]<<" "<<paces[1]<<"\n";
		}else{
			totalTime+=paces[group];
			crossed[group]=true;
			crossed[group-1]=true;
			group+=2;
			std::cout<<paces[group-1]<<" "<<paces[group]<<"\n";
		}
		if(t==1){//fastest goes back
			totalTime+=paces[0];
			crossed[0]=false;
			t+=1;
			std::cout<<paces[0];
		}else if(t==2){//2nd fastest goes back
			totalTime+=paces[1];
			crossed[1]=false;
			t+=1;
			std::cout<<paces[1];
		}
	}
	return 0;
}
