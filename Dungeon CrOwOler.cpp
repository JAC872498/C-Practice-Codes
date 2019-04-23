/*No clue what this is going to turn out to be
mainly making this for the sake of it*/

using namespace std;

#include <iostream>
#define for_each_item(item, list) \
    for(T * item = list->head; item != NULL; item = item->next)
//Creates a foreach loop

class normie{
	public:
	int location[];
	int health;
};

string displayMap(string **map){
	string rtn="";
	for(int row=0;row<sizeof(map)/sizeof(map[0]);row++){
		for(int colm=0;colm<sizeof(map[row])/sizeof(map[row][0]);colm++){
			rtn+=map[row][colm]+"X ";
		}
		rtn+="\n";
	}
	return(rtn);
}

int main(){
	int length,height;
	cout<<"Enter map's length.\n";
	cin>>length;
	cout<<"Enter map's height.\n";
	cin>>height;
	string map[height][length];
	string **mapPoint=map;
	bool playerAlive=true;
	int playerSpot[2]={0,0};
	int playerMove;
	int playerScore=0;
	int uninfectedLeft=(playerSpot[0]*playerSpot[1])/10;
	while(playerAlive){
		mapPoint=map;
		cout<<displayMap(mapPoint);
		do{
			cin>>playerMove;
		}while(playerMove<0 || playerMove>3);
		if(playerMove==0 && playerSpot[1]>0){
			playerSpot[1]-=1;
		}else if(playerMove==1 && playerSpot[0]>0){
			playerSpot[0]-=1;
		}else if(playerMove==2 && playerSpot[1]<length){
			playerSpot[1]+=1;
		}else if(playerMove==3 && playerSpot[0]<height){
			playerSpot[0]+=1;
		}
	}
	return(0);
}