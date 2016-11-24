#include <iostream>//I made this 'game' mostly for the fun/challenge of it and not for gameplay value
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(NULL));
	int xLen,yLen;//This is the range of the 'map'
	string move;
	cout<<"Enter the graph x amount.\n";
	cin>>xLen;
	cout<<"Enter the graph y amount.\n";
	cin>>yLen;
	int player[]={rand()%xLen+1,rand()%yLen+1};//Represented as 'P', this is who the player controls
	int goal[]={rand()%xLen+1,rand()%yLen+1};//Represented as 'X', this is where the player wants to get to
	int easyEnemy[]={rand()%xLen+1,rand()%yLen+1,rand()%xLen+1,rand()%yLen+1,rand()%xLen+1,rand()%yLen+1};//Represented as 'E', these are 2 enemys that kill the player
	while(true){
		if(player[0]==goal[0]&&player[1]==goal[1]){//If the player reaches 'X'
			cout<<"You Win!";
			break;
		}else if((player[0]==easyEnemy[0]&&player[1]==easyEnemy[1])||(player[0]==easyEnemy[2]&&player[1]==easyEnemy[3])){//If the player hits "E"
			cout<<"You Lose!";
			break;
		}
		for(int y=1;y<=yLen;y++){//This chunk is for displaying the board
			for(int x=1;x<=xLen;x++){
				if(player[0]==x&&player[1]==y){
				   	cout<<"P";
				}else if(goal[0]==x&&goal[1]==y){
					cout<<"X";
				}else if((easyEnemy[0]==x&&easyEnemy[1]==y)||(easyEnemy[2]==x&&easyEnemy[3]==y)||(easyEnemy[4]==x&&easyEnemy[5]==y)){
					cout<<"E";
				}else{
					cout<<"*";
				}
			}
			cout<<"\n";
		}
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
		int easyEnemy1Movement=rand()%4+1;
		int easyEnemy2Movement=rand()%4+1;
		int easyEnemy3Movement=rand()%4+1;
		if(easyEnemy1Movement==1&&easyEnemy[0]!=1){//Enemy 1 moving left
			easyEnemy[0]=easyEnemy[0]-1;
		}else if(easyEnemy1Movement==2&&easyEnemy[1]!=1){//Enemy 1 moving up
			easyEnemy[1]=easyEnemy[1]-1;
		}else if(easyEnemy1Movement==3&&easyEnemy[0]!=xLen){//Enemy 1 moding right
			easyEnemy[0]=easyEnemy[0]+1;
		}else if(easyEnemy1Movement==4&&easyEnemy[1]!=yLen){//Enemy 1 moving down
			easyEnemy[1]=easyEnemy[1]+1;
		}
		if(easyEnemy2Movement==1&&easyEnemy[2]!=1){//Enemy 2 moving left
			easyEnemy[2]=easyEnemy[2]-1;
		}else if(easyEnemy2Movement==2&&easyEnemy[3]!=1){//Enemy 2 moving up
			easyEnemy[3]=easyEnemy[3]-1;
		}else if(easyEnemy2Movement==3&&easyEnemy[2]!=xLen){//Enemy 2 moding right
			easyEnemy[2]=easyEnemy[2]+1;
		}else if(easyEnemy2Movement==4&&easyEnemy[3]!=yLen){//Enemy 2 moving down
			easyEnemy[3]=easyEnemy[3]+1;
		}
		if(easyEnemy3Movement==1&&easyEnemy[4]!=1){//Enemy 2 moving left
			easyEnemy[4]=easyEnemy[4]-1;
		}else if(easyEnemy2Movement==2&&easyEnemy[5]!=1){//Enemy 2 moving up
			easyEnemy[5]=easyEnemy[5]-1;
		}else if(easyEnemy2Movement==3&&easyEnemy[4]!=xLen){//Enemy 2 moding right
			easyEnemy[4]=easyEnemy[4]+1;
		}else if(easyEnemy2Movement==4&&easyEnemy[5]!=yLen){//Enemy 2 moving down
			easyEnemy[5]=easyEnemy[5]+1;
		}
	}
	return 0;
}
