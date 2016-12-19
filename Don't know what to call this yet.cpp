#include <iostream>

using namespace std;

bool stuff(int arr[],int x, int y){
	return true;
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
