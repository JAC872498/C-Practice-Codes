/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

#include <iostream>
#include <string>
using namespace std

int main(){
    string myGrid[10][10]={
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"}, 
        {"O","O","O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O","O","O"},
    };
    int ship1[]={0,0};
    int ship2[]={0,0};
    int ship3[]={0,0};
    int ship4[]={0,0};
    int guess[]={0,0};
    cout<<"Enter the coordinates of ship 1.\n";
    cin>>ship1[0]>>ship1[1];
    ship1[0]--;
    ship1[1]--;
    myGrid[ship1[0]][ship1[1]]="1";
    cout<<"Enter the coordinates of ship 2.\n";
    cin>>ship2[0]>>ship2[1];
    ship2[0]--;
    ship2[1]--;
    myGrid[ship2[0]][ship2[1]]="2";
    cout<<"Enter the coordinates of ship 3.\n";
    cin>>ship3[0]>>ship3[1];
    ship3[0]--;
    ship3[1]--;
    myGrid[ship3[0]][ship3[1]]="3";
    cout<<"Enter the coordinates of ship 4.\n";
    cin>>ship4[0]>>ship4[1];
    ship4[0]--;
    ship4[1]--;
    myGrid[ship4[0]][ship4[1]]="4";
    for(int n=0;n<5;n++){
        cout<<"Enter firing coordinates.\n";
        cin>>guess[0]>>guess[1];
        guess[0]--;
        guess[1]--;
        for(int y=0;y<10;y++){
            for(int x=0;x<10;x++){
                cout<<myGrid[x][y];
                //Mark as M or as H
            }
            cout<<"\n";
        }
    }
}
