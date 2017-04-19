/*pg 43*/

#include <iostream>

class Piece{//0=king, 1=queen, 2=rook, 3=knight, 4=bishop, 5=pawn
    public:
        int xPos, yPos;
        bool isWhite, isTaken;
        std::string type, types[12]={"K","Q","R","N","B","P","k","q","r","n","b","p"};
        
        void setAll(int setTypeNum, int setXPos, int setYPos, bool setIsWhite, bool setIsTaken){
            xPos=setXPos-1;
            yPos=setYPos-1;
            isWhite=setIsWhite;
            isTaken=setIsTaken;
            if(isWhite){
                type=types[setTypeNum];
            }else{
                type=types[setTypeNum+6];
            }
        }
        
        bool canMoveTo(int moveToX, int moveToY){
            if((xPos==moveToX&&yPos==moveToY)||moveToX<0||moveToY<0||moveToX>=8||moveToY>=8){
                return false;
            }else if(type=="K"||type=="k"){
                
            }else if(type=="Q"||type=="q"){
                
            }else if(type=="R"||type=="r"){
                
            }else if(type=="N"||type=="n"){
                
            }else if(type=="B"||type=="b"){
                
            }else if(type=="P"){//moves up
                
            }else if(type=="p"){//moves down
                
            }return true;
        }
};

int main(){
    std::string board[8][8]={
        {"1","3",".",".",".",".",".","."},
        {"2",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."}
    };
    Piece testKing;
    testKing.setAll(0,1,1,true,false);
    board[testKing.xPos][testKing.yPos]=testKing.type;
    for(int y=0;y<8;y++){for(int x=0;x<8;x++){std::cout<<board[y][x];}std::cout<<"\n";}
    std::cout<<testKing.canMoveTo(3,4);
    return 0;
}
