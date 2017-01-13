/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main(){
    srand (time(NULL));
    string myGrid[8][8]={
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"},
        {"O","O","O","O","O","O","O","O"}, 
    };
    /*string enemyGrid[8][8]={
        
    }*/
    bool ship1Hit=false;
    bool ship2Hit=false;
    bool ship3Hit=false;
    bool ship4Hit=false;
    bool ship5Hit=false;
    int ship1[]={0,0};
    int ship2[]={0,0};
    int ship3[]={0,0};
    int ship4[]={0,0};
    int ship5[]={0,0};
    int guess[]={0,0};
    int turns=8;
    cout<<"Enter the coordinates of ship 1.\n";
    cin>>ship1[0]>>ship1[1];
    myGrid[ship1[0]-1][ship1[1]-1]="S";
    cout<<"Enter the coordinates of ship 2.\n";
    cin>>ship2[0]>>ship2[1];
    myGrid[ship2[0]-1][ship2[1]-1]="S";
    cout<<"Enter the coordinates of ship 3.\n";
    cin>>ship3[0]>>ship3[1];
    myGrid[ship3[0]-1][ship3[1]-1]="S";
    cout<<"Enter the coordinates of ship 4.\n";
    cin>>ship4[0]>>ship4[1];
    myGrid[ship4[0]-1][ship4[1]-1]="S";
    cout<<"Enter the coordinates of ship 5.\n";
    cin>>ship5[0]>>ship5[1];
    myGrid[ship5[0]-1][ship5[1]-1]="S";
    while(turns!=0&&(!ship1Hit || !ship2Hit || !ship3Hit || !ship4Hit || !ship5Hit)){
        turns--;
        cout<<"Turn "<<8-turns<<"\n";
        guess[0]=rand()%8;
        guess[1]=rand()%8;
        if(guess[0]==ship1[0]-1&&guess[1]==ship1[1]-1){
            myGrid[ship1[0]-1][ship1[1]-1]="H";
            ship1Hit=true;
            turns+=2;
        }else if(guess[0]==ship2[0]-1&&guess[1]==ship2[1]-1){
            myGrid[ship2[0]-1][ship2[1]-1]="H";
            ship2Hit=true;
            turns+=2;
        }else if(guess[0]==ship3[0]-1&&guess[1]==ship3[1]-1){
            myGrid[ship3[0]-1][ship3[1]-1]="H";
            ship3Hit=true;
            turns+=2;
        }else if(guess[0]==ship4[0]-1&&guess[1]==ship4[1]-1){
            myGrid[ship4[0]-1][ship4[1]-1]="H";
            ship4Hit=true;
            turns+=2;
        }else if(guess[0]==ship5[0]-1&&guess[1]==ship5[1]-1){
            myGrid[ship5[0]-1][ship5[1]-1]="H";
            ship4Hit=true;
            turns+=2;
        }else{
            myGrid[guess[0]-1][guess[1]-1]="M";
        }
        for(int y=0;y<8;y++){
            for(int x=0;x<8;x++){
                cout<<myGrid[x][y];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    if(turns==0){
        cout<<"You Win!";
    }else{
        cout<<"You Lose!";
    }
    return 0;
}
