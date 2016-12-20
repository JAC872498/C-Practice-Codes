#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

using namespace std;

bool stuff(int arr[],int x, int y){
	int xPlayer=arr[0];
	int yPlayer=arr[1];
	if((abs(x-xPlayer)==1 && abs(y-yPlayer)<=1) || (abs(y-yPlayer)==1 && abs(x-xPlayer)<=1)){
		return true;
	}return false;//Have this permanently mark spaces as */E/P instead of ?
}

int main(){
	srand(time(NULL));
	int player[]={0, 0};
	int goal[]={rand()%11,rand()%11};
	int xLen=10;
	int yLen=10;
	string move;
	while(true){
		if(player[0]==goal[0]&&player[1]==goal[1]){
			cout<<"You win!";
			break;
		}
		for(int y=0;y<yLen;y++){
			for(int x=0;x<xLen;x++){
				   	if(player[0]==x && player[1]==y){
				   		cout<<"P";
					}else if(stuff(player,x,y)){
				   		if(goal[0]==x && goal[1]==y){
					  		cout<<"X";
						}else{
							cout<<"*";
						}
					}else{
			 			cout<<"?";
				  	}
		  		}
				cout<<"\n";
	   		}
		cin>>move;//This is chunk is for movement
		if(move=="left"&&player[0]!=0){//Player moving left
			player[0]=player[0]-1;
		}else if(move=="right"&&player[0]!=9){//Player moving right
			player[0]=player[0]+1;
		}else if(move=="up"&&player[1]!=0){//Player moving up
			player[1]=player[1]-1;
		}else if(move=="down"&&player[1]!=9){//Player moving down
			player[1]=player[1]+1;
		}
	}
	return 0;
}
