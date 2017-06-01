/*PG 65 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf*/

#include <iostream>

int main(){
	int days, parties, lost=0;
	bool counts=true;//dosn't count if on fri or sat, day 1 is sun
	//std::cin>>times;
	//for(int i=0;i<times;i++){
	std::cin>>days>>parties;
	int strikes[parties];
	for(int x=0;x<parties;x++){
	    std::cin>>strikes[x];
	}
	for(int day=1;day<=days;day++){
	    counts=true;
	    if(day%7==0||(day+1)%7==0) counts=false;
	    if(counts){
	        for(int x=0;x<parties;x++){
	            if(day%strikes[x]==0){
	                lost+=1;
	                break;
	            }
	        }
	    }
	}
	std::cout<<lost;
	//}
	return 0;
}
