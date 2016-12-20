#include <iostream>
#include <stdlib.h>

using namespace std;

bool stuff(int arr[],int x, int y){
	int xPlayer=arr[0];
	int yPlayer=arr[1];
	if((abs(x-xPlayer)==1 && abs(y-yPlayer)<=1) || (abs(y-yPlayer)==1 && abs(x-xPlayer)<=1)){
		return true;
	}return false;//Have this permanently mark spaces as */E/P instead of ?
}

int main(){
	int player[]={0, 0};
	int xLen=10;
	int yLen=10;
	string move;
	while(true){
		for(int y=0;y<yLen;y++){
			for(int x=0;x<xLen;x++){
				   	if(player[0]==x && player[1]==y){
				   	cout<<"P";
				   	}else if(stuff(player,x,y)){
					  		cout<<"*";
					}else{//Add E(end)
			 			cout<<"?";
				  	}
		  		}
				cout<<"\n";
	   		}
		//break once player reaches E
		cin>>move;//This is chunk is for movement
		if(move=="left"&&player[0]!=1){//Player moving left
			player[0]=player[0]-1;
		}else if(move=="right"&&player[0]!=xLen){//Player moving right
			player[0]=player[0]+1;
		}else if(move=="up"&&player[1]!=1){//Player moving up
			player[1]=player[1]-1;
		}else if(move=="down"&&player[1]!=yLen){//Player moving down
			player[1]=player[1]+1;
		}
	}
	return 0;
}
