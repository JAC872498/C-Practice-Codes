/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

#include <iostream>
#include <string>
using namespace std;

bool hit(int guess[], int ship[], bool hit){
    if((guess[0]-1==ship[0] && guess[1]-1==ship[1])||hit){
        cout<<("E ");
        return true;
    }else{
        cout<<("S ");
        return false;
    }
}

int main(){
    int xLen=10;
    int yLen=10;
    int ship1[]={0,0};
    int ship2[]={0,0};
    int ship3[]={0,0};
    int ship4[]={0,0};
    int guess[]={0,0};
    bool ship1Hit=false;
    bool ship2Hit=false;
    bool ship3Hit=false;
    bool ship4Hit=false;
    cout<<"Enter the coordinates of ship 1.\n";
    cin>>ship1[0]>>ship1[1];
    ship1[0]--;
    ship1[1]--;
    cout<<"Enter the coordinates of ship 2.\n";
    cin>>ship2[0]>>ship2[1];
    ship2[0]--;
    ship2[1]--;
    cout<<"Enter the coordinates of ship 3.\n";
    cin>>ship3[0]>>ship3[1];
    ship3[0]--;
    ship3[1]--;
    cout<<"Enter the coordinates of ship 4.\n";
    cin>>ship4[0]>>ship4[1];
    ship4[0]--;
    ship4[1]--;
    for(int n=0;n<5;n++){
        cout<<"Enter firing coordinates.\n";
        cin>>guess[0]>>guess[1];
        for(int y=0;y<yLen;y++){
            for(int x=0;x<xLen;x++){
                if(ship1[0]==x && ship1[1]==y){
                    ship1Hit=hit(guess, ship1, ship1Hit);
                }else if(ship2[0]==x && ship2[1]==y){
                    ship2Hit=hit(guess, ship2, ship2Hit);
                }else if(ship3[0]==x && ship3[1]==y){
                    ship3Hit=hit(guess, ship3, ship3Hit);
                }else if(ship4[0]==x && ship4[0]==y){
                    ship4Hit=hit(guess, ship4, ship4Hit);
                }else{
                    if(guess[0]-1==x && guess[1]-1==y){
                        cout<<"M ";
                    }else{
                        cout<<"O ";
                    }
                }
            }
            cout<<"\n";
        }
    }
    return (0);
}
