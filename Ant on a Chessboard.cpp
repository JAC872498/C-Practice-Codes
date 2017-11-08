#include <iostream>
#include <iomanip>

int main(){
  int xPos=0,yPos=0,jump=0,move=1;
  int graph[5][5];
  graph[yPos][xPos]=move;
  //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
  for(int n=0;n<2;n++){
      jump+=1;
      yPos+=1;
      move+=1;
      graph[yPos][xPos]=move;
      //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      for(int x=0;x<jump;x++){
          xPos+=1;   
          move+=1;
          graph[yPos][xPos]=move;
          //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
      for(int y=0;y<jump;y++){
          yPos-=1;
          move+=1;
          graph[yPos][xPos]=move;
          //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
      jump+=1;
      xPos+=1;
      move+=1;
      graph[yPos][xPos]=move;
      //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      for(int y=0;y<jump;y++){
          yPos+=1;
          move+=1;
          graph[yPos][xPos]=move;
          //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
      for(int x=0;x<jump;x++){
          xPos-=1;
          move+=1;
          graph[yPos][xPos]=move;
          //std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
  }
  for(int y=4;y>=0;y--){
      for(int x=0;x<5;x++){
          std::cout<<std::setw(2)<<std::left<<graph[y][x]<<" ";
      }
      std::cout<<std::endl;
  }
}
