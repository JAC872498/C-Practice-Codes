/*PG 111 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
Basicly find the quickest way to move a group of people along a bridge
Only two people at a time can cross and a group or person must have the flashlight to cross
Each person moves at a given pace and groups move at the pace of the slower person
This displays the movements over the bridge along with the total time*/

#include <iostream>
#include <vector>

bool allCrossed(std::vector<bool> crossed,int members){//All I want to do is 'return(false in crossed)'. Python has spoiled me
	for(int x=0;x<members;x++){
		if(crossed[x]==false) return false;
	}return true;
}

int main(){
	int members,group=3,totalTime=0,t=0;
	bool flashLight=true;//true=hasn't crossed, false=has crossed
	std::cin>>members;
	if(members==0){
		std::cout<<0;
		return 0;
	}
	std::vector<int> paces(members);
	std::vector<bool> crossed(members);
	for(int x=0;x<members;x++){
		std::cin>>paces[x];
		crossed[x]=false;
	}
	if(members==1){
		std::cout<<paces[0];
		return 0;
	}
	crossing:
	while(!allCrossed(crossed,members)){
		if(t==0){//2 fastest cross
			totalTime+=paces[1];
			crossed[1]=true;
			crossed[0]=true;
			t+=1;
			std::cout<<paces[0]<<" "<<paces[1]<<"\n";
		}else{//others cross
			totalTime+=paces[group];
			crossed[group]=true;
			crossed[group-1]=true;
			std::cout<<paces[group-1]<<" "<<paces[group]<<"\n";
			group+=2;
		}
		if(allCrossed(crossed,members)) break;
		if(t==1){//fastest goes back
		  	totalTime+=paces[0];
			crossed[0]=false;
			t+=1;
			std::cout<<paces[0]<<"\n";
			goto crossing;
		}else if(t==2){//2nd fastest goes back
		   	totalTime+=paces[1];
		   	crossed[1]=false;
			t=0;
		   	std::cout<<paces[1]<<"\n";
		   	goto crossing;
		}
	}
	std::cout<<totalTime;
	return 0;
}
