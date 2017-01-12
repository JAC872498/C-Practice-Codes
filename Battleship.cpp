/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int xLen=10;
    int yLen=10;
    int ship1[]={0,0};
    int ship2[]={0,0};
    int ship3[]={0,0};
    int ship4[]={0,0};
    cout<<"Enter the coordonates of ship 1.\n";
    cin>>ship1[0]>>ship1[1];
    ship1[0]--;
    ship1[1]--;
    cout<<"Enter the coordonates of ship 2.\n";
    cin>>ship2[0]>>ship2[1];
    ship2[0]--;
    ship2[1]--;
    cout<<"Enter the coordonates of ship 3.\n";
    cin>>ship3[0]>>ship3[1];
    ship3[0]--;
    ship3[1]--;
    cout<<"Enter the coordonates of ship 4.\n";
    cin>>ship4[0]>>ship4[1];
    ship4[0]--;
    ship4[1]--;
    for(int y=0;y<yLen;y++){
        for(int x=0;x<xLen;x++){
            if((ship1[0]==x && ship1[1]==y)||(ship2[0]==x && ship2[1]==y)||(ship3[0]==x && ship3[1]==y)||(ship4[0]==x && ship4[0]==y)){
                cout<<"S ";
            }else{
                cout<<"O ";
            }
        }
        cout<<"\n";
    }
}
