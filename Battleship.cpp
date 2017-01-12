/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

#include <iostream>
#include <string>
using namespace std;

string hit(int guess[], int ship[],int x, int y, bool hit){
    if((guess[0]-1==x && guess[1]-1==y)||hit){
        return("E ");
    }else{
        return("S ");
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
                    cout<<hit(guess, ship1, x, y, ship1Hit);
                    ship1Hit=true;
                }else if(ship2[0]==x && ship2[1]==y){
                    cout<<hit(guess, ship2, x, y, ship2Hit); 
                    ship2Hit=true;
                }else if(ship3[0]==x && ship3[1]==y){
                    cout<<hit(guess, ship3, x, y, ship3Hit);
                    ship3Hit=true;
                }else if(ship4[0]==x && ship4[0]==y){
                    cout<<hit(guess, ship4, x, y, ship4Hit);
                    ship4Hit=true;
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
