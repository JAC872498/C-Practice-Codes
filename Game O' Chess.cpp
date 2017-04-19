/*43*/

#include <iostream>

class piece{//0=king, 1=queen, 2=rook, 3=knight, 4=bishop, 5=pawn
    public:
        bool white;
        int piece;
        int position;
    if(type==0){//white pieces=uppercase, black pieces=lowwercase
        if(white) piece="K";
        else piece="k"l;
    }else if(type==1){
        if(white){
            
        }else{
            
        }
    }else if(type==2){
        if(white){
            
        }else{
            
        }
    }else if(type==3){
        if(white){
            
        }else{
            
        }
    }else if(type==4){
        if(white){
            
        }else{
            
        }
    }else if(type==5){
        if(white){
            
        }else{
            
        }
    }else{
    }
}

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
    return 0;
}
