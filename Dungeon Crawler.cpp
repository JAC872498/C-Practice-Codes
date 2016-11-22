/*This is a game where players control 'P' and try to get to 'X' without running into 'E'*/
#include <iostream>

using namespace std;

int main(){
	int xLen=6,yLen=6;//This is the range of the 'map'
	int player[]={3,3};//Represented as 'P', this is who the player controls
	int goal[]={6,6};//Represented as 'X', this is where the player wants to get to.
	string move;
	while(true){
		if(player[0]==goal[0]&&player[1]==goal[1]){//If the player reaches 'X'
			break;
		}else if(player[0]>6||player[1]>6||player[0]<=0||player[1]<=0){//If the player goes out of bounds
			break;
		}
		for(int y=1;y<=yLen;y++){//This chunk is for displaying the board
			for(int x=1;x<=xLen;x++){
				if(player[0]==x && player[1]==y){
				   	cout<<"P";
				}else if(goal[0]==x && goal[1]==y){
					cout<<"X";
				}else{
					cout<<"*";
				}
			}
			cout<<"\n";
		}
		cin>>move;//This is chunk is for movement
		if(move=="left"){
			player[0]=player[0]-1;
		}else if(move=="right"){
			player[0]=player[0]+1;
		}else if(move=="up"){
			player[1]=player[1]-1;
		}else if(move=="down"){
			player[1]=player[1]+1;
		}
	}
	return 0;
}
