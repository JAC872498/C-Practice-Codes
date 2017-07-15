/*This takes a given revealed mine sweeper board and scores it appropriately*/
#include <iostream>
#include <string>
#include <stdlib.h> 

int main(){
    int xLen, yLen;
    std::string row;
    std::cin>>xLen>>yLen;
    std::string grid[xLen][yLen];
    row="abc";
    for(int x=0;x<xLen;x++){
        std::cin>>row;
        grid[x][0]=row.substr(0,1);
        if(grid[x][0]=="."){grid[x][0]="0";}
        for(int y=1;y<yLen;y++){
            grid[x][y]=row.substr(y,1);
            if(grid[x][y]=="."){grid[x][y]="0";}
        }
    }
    for(int x=0;x<xLen;x++){
        for(int y=0;y<yLen;y++){
            if(grid[x][y]=="*"){
                if(x-1>=0&&y-1>=0&&grid[x-1][y-1]!="*"){grid[x-1][y-1]=std::to_string(atoi(grid[x-1][y-1].c_str())+1);}
                if(x-1>=0&&grid[x-1][y]!="*"){grid[x-1][y]=std::to_string(atoi(grid[x-1][y].c_str())+1);}
                if(x-1>=0&&y+1<yLen&&grid[x-1][y+1]!="*"){grid[x-1][y+1]=std::to_string(atoi(grid[x-1][y+1].c_str())+1);}
                if(y-1>=0&&grid[x][y-1]!="*"){grid[x][y-1]=std::to_string(atoi(grid[x][y-1].c_str())+1);}
                if(y+1<yLen&&grid[x][y+1]!="*"){grid[x][y+1]=std::to_string(atoi(grid[x][y+1].c_str())+1);}
                if(x+1<xLen&&y-1>=0&&grid[x+1][y-1]!="*"){grid[x+1][y-1]=std::to_string(atoi(grid[x+1][y-1].c_str())+1);}
                if(x+1<xLen&&grid[x+1][y]!="*"){grid[x+1][y]=std::to_string(atoi(grid[x+1][y].c_str())+1);}
                if(x+1<xLen&&y+1<yLen&&grid[x+1][y+1]!="*"){grid[x+1][y+1]=std::to_string(atoi(grid[x+1][y+1].c_str())+1);}//I don't think I could make this uglier if I wanted 
            }
        }
    }
    for(int x=0;x<xLen;x++){for(int y=0;y<yLen;y++){std::cout<<grid[x][y];}std::cout<<"\n";}
   return 0;
}
