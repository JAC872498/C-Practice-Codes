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
        
        void moveTo(int setRow, int setColumn){
            row=setRow-1;
            column=setColumn-1;
        }
        
        bool canMoveTo(int moveToRow, int moveToColumn, char board[8][8]){
            char t=board[moveToRow][moveToColumn];
            if((row==moveToRow&&column==moveToColumn)||moveToRow<0||moveToColumn<0||moveToRow>=8||moveToColumn>=8){
                return false;
            }else if(t!='.'&&(islower(t)!=0)&&(islower(type)!=0)){
                return false;
            }else if(t!='.'&&(isupper(t)!=0)&&(isupper(type)!=0)){
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
            }
        }
};

int findPiece(Piece fleet[16], int givenRow, int givenColumn){
    for(int x=0;x<16;x++){
        if(fleet[x].row==givenRow&&fleet[x].column==givenColumn){
            return x;
        }
    }
}

int check(Piece whiteFleet[16], Piece blackFleet[16], char board[8][8]){//0==no check, 1==black king is in check, 2==white king is in check
    for(int x=0;x<16;x++){
        if(whiteFleet[x].canMoveTo(blackFleet[4].row, blackFleet[4].column, board)){
            return 1;
        }
        if(blackFleet[x].canMoveTo(whiteFleet[4].row, whiteFleet[4].column, board)){
            return 2;
        }
    }
    return 0;
}

int main(){
    int turn=2, currentRow, currentColumn, movingRow, movingColumn;
    std::string winner, giveUp="";
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
    //std::cout<<whiteFleet[4].type<<whiteFleet[4].row<<whiteFleet[4].column<<"\n";
    while(giveUp!="Y"){
        turn++;
        for(int row=0;row<8;row++){for(int column=0;column<8;column++){std::cout<<board[row][column];}std::cout<<"\n";}
        //std::cout<<whiteFleet[7].type<<whiteFleet[7].row<<whiteFleet[7].column<<"\n";
        if(turn%2==0){
            std::cout<<"Black's turn.\nEnter the row and column of the piece you want to move\n";
            std::cin>>currentRow>>currentColumn;
            std::cout<<blackFleet[findPiece(blackFleet,currentRow-1,currentColumn-1)].type<<blackFleet[findPiece(blackFleet,currentRow-1,currentColumn-1)].row<<blackFleet[findPiece(blackFleet,currentRow-1,currentColumn-1)].column<<"\n";
            std::cout<<"Enter the row and column of where you want to move the piece\n";
            std::cin>>movingRow>>movingColumn;
            while((isupper(board[currentRow-1][currentColumn-1])!=0)||!(blackFleet[findPiece(blackFleet, currentRow-1, currentColumn-1)].canMoveTo(movingRow-1, movingColumn-1, board))||blackFleet[findPiece(blackFleet, currentRow-1, currentColumn-1)].isTaken){
                std::cout<<"Invalid move, enter the row and column of the piece you want to move\n";
                std::cin>>currentRow>>currentColumn;
                std::cout<<"Enter the row and column of where you want to move the piece\n";
                std::cin>>movingRow>>movingColumn;
            }
            currentRow--;currentColumn--;movingRow--;movingColumn--;
            if(board[movingRow][movingColumn]!='.'){
                whiteFleet[findPiece(whiteFleet, movingRow, movingColumn)].isTaken=true;
            }
            blackFleet[findPiece(blackFleet,currentRow,currentColumn)].moveTo(movingRow,movingColumn);
            board[movingRow][movingColumn]=blackFleet[findPiece(blackFleet,currentRow,currentColumn)].type;
            board[currentRow][currentColumn]='.';
        }else{
            std::cout<<"White's turn.\nEnter the row and column of the piece you want to move\n";
            std::cin>>currentRow>>currentColumn;
            std::cout<<whiteFleet[findPiece(whiteFleet,currentRow-1,currentColumn-1)].type<<whiteFleet[findPiece(whiteFleet,currentRow-1,currentColumn-1)].row<<whiteFleet[findPiece(whiteFleet,currentRow-1,currentColumn-1)].column<<"\n";
            std::cout<<"Enter the row and column of where you want to move the piece\n";
            std::cin>>movingRow>>movingColumn;
            while((islower(board[currentRow-1][currentColumn-1])!=0)||!(whiteFleet[findPiece(whiteFleet, currentRow-1, currentColumn-1)].canMoveTo(movingRow-1, movingColumn-1, board))||whiteFleet[findPiece(whiteFleet, currentRow-1, currentColumn-1)].isTaken){
                std::cout<<"Invalid move, enter the row and column of the piece you want to move\n";
                std::cin>>currentRow>>currentColumn;
                std::cout<<"Enter the row and column of where you want to move the piece\n";
                std::cin>>movingRow>>movingColumn;
            }
            currentRow--;currentColumn--;movingRow--;movingColumn--;
            if(board[movingRow][movingColumn]!='.'){
                blackFleet[findPiece(blackFleet, movingRow, movingColumn)].isTaken=true;
            }
            whiteFleet[findPiece(whiteFleet,currentRow,currentColumn)].moveTo(movingRow,movingColumn);
            board[movingRow][movingColumn]=whiteFleet[findPiece(whiteFleet,currentRow,currentColumn)].type;
            board[currentRow][currentColumn]='.';
        }
        if(check(whiteFleet,blackFleet,board)==1){
            std::cout<<"The black king is in check, do you give up?(Y/N)\n";
            std::cin>>giveUp;
            if(giveUp=="Y"){
                winner="White";
            }   
        }else if(check(whiteFleet,blackFleet,board)==2){
            std::cout<<"The white king is in check, do you give up?(Y/N)\n";
            std::cin>>giveUp;
            if(giveUp=="Y"){
                winner="Black";
            }
        }
    }
    std::cout<<winner<<" won in "<<turn-2<<" turns";
    return 0;
}
