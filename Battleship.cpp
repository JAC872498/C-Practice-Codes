/*This basicly recreates the game of battle ship with S being ships, O being water on your board. and M being miss and E being hit on enemy's board.*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
using namespace std;

int main(){
    srand (time(NULL));
    string myGrid[6][6]={
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
    };
    string enemyGrid[6][6]={
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
        {"-","-","-","-","-","-"},
    };
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
    bool eShip1Hit=false;
    bool eShip2Hit=false;
    bool eShip3Hit=false;
    bool eShip4Hit=false;
    bool eShip5Hit=false;
    int eShip1[]={rand()%6,rand()%6};
    int eShip2[]={rand()%6,rand()%6};
    int eShip3[]={rand()%6,rand()%6};
    int eShip4[]={rand()%6,rand()%6};
    int eShip5[]={rand()%6,rand()%6};
    int enemyGuess[]={0,0};
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
    while((!ship1Hit || !ship2Hit || !ship3Hit || !ship4Hit || !ship5Hit)&&(!eShip1Hit || !eShip2Hit || !eShip3Hit || !eShip4Hit || !eShip5Hit)){
        enemyGuess[0]=rand()%6;
        enemyGuess[1]=rand()%6;
        if(enemyGuess[0]==ship1[0]-1&&enemyGuess[1]==ship1[1]-1){
            myGrid[ship1[0]-1][ship1[1]-1]="H";
            ship1Hit=true;
        }else if(enemyGuess[0]==ship2[0]-1&&enemyGuess[1]==ship2[1]-1){
            myGrid[ship2[0]-1][ship2[1]-1]="H";
            ship2Hit=true;
        }else if(enemyGuess[0]==ship3[0]-1&&enemyGuess[1]==ship3[1]-1){
            myGrid[ship3[0]-1][ship3[1]-1]="H";
            ship3Hit=true;
        }else if(enemyGuess[0]==ship4[0]-1&&enemyGuess[1]==ship4[1]-1){
            myGrid[ship4[0]-1][ship4[1]-1]="H";
            ship4Hit=true;
        }else if(enemyGuess[0]==ship5[0]-1&&enemyGuess[1]==ship5[1]-1){
            myGrid[ship5[0]-1][ship5[1]-1]="H";
            ship4Hit=true;
        }else{
            myGrid[enemyGuess[0]-1][enemyGuess[1]-1]="M";
        }
        cout<<"Your grid:\n";
        for(int y=0;y<6;y++){
            for(int x=0;x<6;x++){
                cout<<myGrid[x][y];
            }
            cout<<"\n";
        }
        cout<<"Enemy's grid:\n";
        for(int y=0;y<6;y++){
            for(int x=0;x<6;x++){
                cout<<enemyGrid[x][y];
            }
            cout<<"\n";
        }
        cout<<"\nEnter firing coordinates.\n";
        cin>>guess[0]>>guess[1];
        if(guess[0]==eShip1[0]&&guess[0]==eShip1[1]){
            enemyGrid[guess[0]-1][guess[1]-1]="H";
            eShip1Hit=true;
        }else if(guess[0]==eShip2[0]&&guess[0]==eShip2[1]){
            enemyGrid[guess[0]-1][guess[1]-1]="H";
            eShip2Hit=true;
        }else if(guess[0]==eShip3[0]&&guess[0]==eShip3[1]){
            enemyGrid[guess[0]-1][guess[1]-1]="H";
            eShip3Hit=true;
        }else if(guess[0]==eShip4[0]&&guess[0]==eShip4[1]){
            enemyGrid[guess[0]-1][guess[1]-1]="H";
            eShip4Hit=true;
        }else if(guess[0]==eShip5[0]&&guess[0]==eShip5[1]){
            enemyGrid[guess[0]-1][guess[1]-1]="H";
            eShip5Hit=true;
        }else{
            enemyGrid[guess[0]-1][guess[1]-1]="M";
        }
    }
    if(eShip1Hit && eShip2Hit && eShip3Hit && eShip4Hit && eShip5Hit){
        cout<<"You Win!";
    }else{
        cout<<"You Lose!";
    }
    return 0;
}
