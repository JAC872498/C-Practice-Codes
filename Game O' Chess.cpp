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
};

int main(){
    std::string board[8][8]={
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."}
    };
    /*Piece testKing;
    testKing.setAll(0,1,1,true,false);
    board[testKing.xPos][testKing.yPos]=testKing.type;*/
    for(int x=0;x<8;x++){for(int y=0;y<8;y++){std::cout<<board[x][y];}std::cout<<"\n";}
    return 0;
}
