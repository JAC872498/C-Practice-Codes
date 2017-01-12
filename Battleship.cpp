/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

// Example program
#include <iostream>
#include <string>
using namespace std;

int shipThere(int x, int y, int ship1[], int ship2[], int ship3[], int ship4[]){
    if((ship1[0]==x && ship1[1]==y)||(ship2[0]==x && ship2[1]==y)||()||())
}

int main(){
    int xLen=10;
    int yLen=10;
    int ship1[]={0,0};
    int ship2[]={1,1};
    int ship3[]={2,2};
    int ship4[]={3,3};
    for(int y=0;y<yLen;y++){
        for(int x=0;x<xLen;x++){
            cout<<"O ";
        }
        cout<<"\n";
    }
}
