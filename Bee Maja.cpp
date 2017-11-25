/*pg 303 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
Very similar to the 'ants on a chessboard' problem but with a different shape
Happy Thanksgiving!*/

#include <iostream>

int main(){
	int xPos=0,yPos=0,spot=1,jump=1,wanted;
	std::cin>>wanted;
	int positions[wanted][2];
	positions[0]={0,0};
	positions[1]={0,1};
	yPos+=jump;//the first two moves are weird
	spot+=1;//also the y-axis is inverted
	xPos-=jump;
	spot+=1;
	
	while(spot<=wanted){
		for(int n=0;n<jump;n++){
			positions[spot-1]={xPos,yPos};
			yPos-=1;//Up
			spot+=1;
		}
		for(int n=0;n<jump;n++){
			positions[spot-1]={xPos,yPos};
			yPos-=1;//Up right
			xPos+=1;
			spot+=1;
		}
		for(int n=0;n<jump;n++){
			positions[spot-1]={xPos,yPos};
			xPos+=1;//Right
			spot+=1;
		}
		for(int n=0;n<=jump;n++){
			positions[spot-1]={xPos,yPos};
			yPos+=1;//Down+1
			spot+=1;
		}
		for(int n=0;n<jump;n++){
			positions[spot-1]={xPos,yPos};
			yPos+=1;//Down left
			xPos-=1;
			spot+=1;
		}
		for(int n=0;n<=jump;n++){
			positions[spot-1]={xPos,yPos};
			xPos-=1;//Left+1
			spot+=1;
		}
		jump+=1;
	}
	std::cout<<positions[wanted-1][0]<<" "<<positions[wanted-1][1];
	return(0);
}
