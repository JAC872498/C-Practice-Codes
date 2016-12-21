#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>

using namespace std;

bool stuff(int arr[],int x, int y){
	int xPlayer=arr[0];
	int yPlayer=arr[1];
	if((abs(x-xPlayer)<=2 && abs(y-yPlayer)<=2) || (abs(y-yPlayer)<=2 && abs(x-xPlayer)<=2)){
		return true;
	}return false;
}

int main(){
	srand(time(NULL));
	int player[]={0, 0};
	int xLen=10;
	int yLen=10;
	cout<<"Enter the x length of the grid.\n";
	cin>>xLen;
	cout<<"Enter the y length of the grid.\n";
	cin>>yLen;
	string move;
	int goal[]={rand()%xLen,rand()%yLen};
	int enemy[]={rand()%xLen,rand()%yLen};
	while(true){
		if(player[0]==goal[0]&&player[1]==goal[1]){
			cout<<"You win!";
			break;
		}else if(player[0]==enemy[0]&&player[1]==enemy[1]){
			cout<<"You lose!";
			break;
		}
		for(int y=0;y<yLen;y++){
			for(int x=0;x<xLen;x++){
				   	if(player[0]==x && player[1]==y){
				   		cout<<"P";
					}else if(stuff(player,x,y)){
				   		if(goal[0]==x && goal[1]==y){
					  		cout<<"X";
						}else if(enemy[0]==x && enemy[1]==y){
							cout<<"E";
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
		int enemy1Movement=rand()%4+1;
		if(enemy1Movement==1&&enemy[0]!=0){//Enemy 1 moving left
			enemy[0]=enemy[0]-1;
		}else if(enemy1Movement==2&&enemy[1]!=0){//Enemy 1 moving up
			enemy[1]=enemy[1]-1;
		}else if(enemy1Movement==3&&enemy[0]!=xLen-1){//Enemy 1 moding right
			enemy[0]=enemy[0]+1;
		}else if(enemy1Movement==4&&enemy[1]!=yLen-1){//Enemy 1 moving down
			enemy[1]=enemy[1]+1;
		}
	}
	return 0;
}
