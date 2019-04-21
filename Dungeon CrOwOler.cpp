/*
*/

using namespace std;

#include <iostream>
#define for_each_item(item, list) \
    for(T * item = list->head; item != NULL; item = item->next)
//Creates a foreach loop
	
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

class normie{
	public:
	int location[];
	int health;
};

int main(){
	int length,height;
	cout<<"Enter map's length.\n";
	cin>>length;
	cout<<"Enter map's height.\n";
	cin>>height;
	string **map;
	bool playerAlive=true;
	int playerSpot[2]={0,0};
	int playerMove;
	int playerScore=0;
	int uninfectedLeft=(playerSpot[0]*playerSpot[1])/10;
	while(playerAlive){
		cout<<displayMap(map);
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