/*pg 43*/

#include <iostream>

class Piece{//0=king, 1=queen, 2=rook, 3=knight, 4=bishop, 5=pawn
    public:
        int xPos, yPos;
        bool isWhite, isTaken;
        std::string type, types[12]={"K","Q","R","N","B","P","k","q","r","n","b","p"};
        void setAll(int setTypeNum, int setXPos, int setYPos, bool setIsWhite, bool setIsTaken){
            xPos=setXPos;
            yPos=setYPos;
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
    std::string grid[8][8]={
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."},
        {".",".",".",".",".",".",".","."}
    };
    for(int x=0;x<8;x++){for(int y=0;y<8;y++){std::cout<<grid[x][y];}std::cout<<"\n";}
    Piece test1;
    test1.setAll(0,5,6,true,false);
    std::cout<<test1.isWhite;
    return 0;
}
