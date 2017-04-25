#include <iostream>
#include <ctype.h>
#include <stdlib.h>

class Piece{
    public:
        int row, column;
        bool isWhite, isTaken;
        char type;//, types[18]={"R","N","B","Q","K","B","N","R","P","r","n","b","q","k","b","n","r","p"};
        
        void setAll(int setTypeNum, int setRow, int setColumn, bool setIsWhite, bool setIsTaken, char types[18]){
            row=setRow-1;
            column=setColumn-1;
            isWhite=setIsWhite;
            isTaken=setIsTaken;
            if(isWhite){
                type=types[setTypeNum];
            }else{
                type=types[setTypeNum+9];
            }
        }
        
        bool canMoveTo(int moveToRow, int moveToColumn, char board[8][8]){
            char t=board[moveToRow][moveToColumn];
            if((row==moveToRow&&column==moveToColumn)||moveToRow<0||moveToColumn<0||moveToRow>=8||moveToColumn>=8){
                return false;
            }else if(type=='K'||type=='k'){
                return(abs(moveToRow-row)<=1&&abs(moveToColumn-column)<=1);
            }else if(type=='Q'||type=='q'){
                return((abs(moveToRow-row)==abs(moveToColumn-column))||((moveToRow==row&&moveToColumn!=column)||(moveToRow!=row&&moveToColumn==column)));
            }else if(type=='B'||type=='b'){
                return(abs(moveToRow-row)==abs(moveToColumn-column));
            }else if(type=='N'||type=='n'){
                return((abs(moveToRow-row)==2&&abs(moveToColumn-column)==1)||(abs(moveToRow-row)==1&&abs(moveToColumn-column)==2));
            }else if(type=='R'||type=='r'){
                return((moveToRow==row&&moveToColumn!=column)||(moveToRow!=row&&moveToColumn==column));
            }else if(type=='P'){//moves up
                if(moveToRow==row-1&&(moveToColumn==column-1||moveToColumn==column+1)&&(islower(t)!=0)){
                    return true;
                }
                return(moveToRow==row-1&&moveToColumn==column);
            }else if(type=='p'){//moves down
                if(moveToRow==row+1&&(moveToColumn==column-1||moveToColumn==column+1)&&(isupper(t)!=0)){
                    return true;
                }
                return(moveToRow==row+1&&moveToColumn==column);
            }return true;
        }
};

int main(){
    char board[8][8]={
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
    };
    char types[18]={'R','N','B','Q','K','B','N','R','P','r','n','b','q','k','b','n','r','p'};
    /*White pieces*/Piece whiteKing, whiteQueen, whiteRook1, whiteRook2, whiteKnight1, whiteKnight2, whiteBishop1, whiteBishop2, whitePawn1, whitePawn2, whitePawn3, whitePawn4, whitePawn5, whitePawn6, whitePawn7, whitePawn8;
    /*Black pieces*/Piece blackKing, blackQueen, blackRook1, blackRook2, blackKnight1, blackKnight2, blackBishop1, blackBishop2, blackPawn1, blackPawn2, blackPawn3, blackPawn4, blackPawn5, blackPawn6, blackPawn7, blackPawn8;
    Piece whiteFleet[16]={whiteRook1, whiteKnight1, whiteBishop1, whiteQueen, whiteKing, whiteBishop2, whiteKnight2, whiteRook2, whitePawn1, whitePawn2, whitePawn3, whitePawn4, whitePawn5, whitePawn6, whitePawn7, whitePawn8};
    Piece blackFleet[16]={blackRook1, blackKnight1, blackBishop1, blackQueen, blackKing, blackBishop2, blackKnight2, blackRook2, blackPawn1, blackPawn2, blackPawn3, blackPawn4, blackPawn5, blackPawn6, blackPawn7, blackPawn8};
    for(int pawnNum=8;pawnNum<16;pawnNum++){
        whiteFleet[pawnNum].setAll(8, 7, pawnNum-7, true, false, types);
        blackFleet[pawnNum].setAll(8, 2, pawnNum-7, false, false, types);
        board[whiteFleet[pawnNum].row][whiteFleet[pawnNum].column]=whiteFleet[pawnNum].type;
        board[blackFleet[pawnNum].row][blackFleet[pawnNum].column]=blackFleet[pawnNum].type;
    }
    for(int pieceNum=0;pieceNum<8;pieceNum++){
        whiteFleet[pieceNum].setAll(pieceNum, 8, pieceNum+1, true, false, types);
        blackFleet[pieceNum].setAll(pieceNum, 1, pieceNum+1, false, false, types);
        board[whiteFleet[pieceNum].row][whiteFleet[pieceNum].column]=whiteFleet[pieceNum].type;
        board[blackFleet[pieceNum].row][blackFleet[pieceNum].column]=blackFleet[pieceNum].type;
    }
    for(int row=0;row<8;row++){for(int column=0;column<8;column++){std::cout<<board[row][column];}std::cout<<"\n";}
    std::cout<<whiteFleet[5].type<<whiteFleet[5].row<<whiteFleet[5].column<<"\n";
    return 0;
}
