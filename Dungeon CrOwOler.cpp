/*
*/

using namespace std;

#include <iostream>
#define for_each_item(item, list) \
    for(T * item = list->head; item != NULL; item = item->next)
//Creates a foreach loop
	
std::string displayMap(string map[]){
	string rtn="";
	for(int row=0;row<sizeof(map)/sizeof(map[0]);row++){
		for(int colm=0;colm<sizeof(map[row])/sizeof(map[row][0]);colm++){
			rtn+=map[row][colm]+" ";
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
	int length,width;
	cout<<"Enter map's length.";
	cin>>length;
	cout<<"Enter map's height.";
	cin>>width
	string map[width][length];
	bool playerAlive=true;
	int playerSpot[]=[0,0];
	int playerMove;
	int playerScore=0;
	int uninfectedLeft=(playerSpot[0]*playerSpot[1])/10;
	while(playerAlive){
		cout<<displayMap();
		do{
			cin>>playerMove;
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