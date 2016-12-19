#include <iostream>//This is like dungeon crawler, but with no enemies(yet) and you have to search for the exit
#include <stdlib.h>

using namespace std;

bool stuff(int arr[],int x, int y){
	int xPlayer=arr[0];
	int yPlayer=arr[1];
	if(abs(x-xPlayer)==1 || abs(y-yPlayer)==1){//WORK ON THIS
		return true;
	}return false;
}

int main(){
	int player[]={0, 0};
	int xLen=10;
	int yLen=10;
	for(int x=0;x<xLen;x++){
		for(int y=0;y<yLen;y++){
			if(player[0]==x && player[1]==y){
				cout<<"P";
			}else if(stuff(player,x,y)){
				cout<<"*";
			}else{
				cout<<"?";
			}
		}
		cout<<"\n";
	}
	return 0;
}
