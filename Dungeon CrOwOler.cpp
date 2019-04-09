/*
*/

#include <iostream>

std::String displayMap(){
	std::String rtn="";
	for(std::String s1[]: map){
		for(std::String s2:s1){
			rtn+=s2+" ";
		}
		rtn+="\n";
	}
	return(rtn);
}

int main(){
	std::String[][] map;
	bool playerAlive=true;
	int[] playerSpot=[0,0];
	int playerMove;
	int playerScore=0;
	int uninfectedLeft;
	while(playerAlive){
		std::cout<<displayMap();
		do{
			std::cin>>playerMove;
		}while(playerMove<0 || playerMove>3);
		if(playerMove==0 && player[1]>0){
			player[1]-=1;
		}else if(playerMove==1 && player[0]>0){
			player[0]-=1;
		}else if(playerMove==2 && player[1]<map[0].length){
			player[1]+=1;
		}else if(playerMove==3 && player[0]<map.length){
			player[0]+=1;
		}
	}
	return(0);
}
