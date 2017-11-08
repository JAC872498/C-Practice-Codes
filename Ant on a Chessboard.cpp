//Page 299 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf

#include <iostream>
#include <iomanip>
#include <math.h>

int main(){
  int xPos=0,yPos=0,jump=0,move=1,wantedX,wantedY,wantedNum;
  std::cin>>wantedNum;
  int graph[(int) ceil(sqrt(wantedNum))][(int) ceil(sqrt(wantedNum))];
  graph[yPos][xPos]=move;
  while(move<wantedNum){
      jump+=1;
      yPos+=1;
      move+=1;
      graph[yPos][xPos]=move;
      for(int x=0;x<jump;x++){
          xPos+=1;   
          move+=1;
          graph[yPos][xPos]=move;
      }
      for(int y=0;y<jump;y++){
          yPos-=1;
          move+=1;
          graph[yPos][xPos]=move;
      }
      jump+=1;
      xPos+=1;
      move+=1;
      graph[yPos][xPos]=move;
      for(int y=0;y<jump;y++){
          yPos+=1;
          move+=1;
          graph[yPos][xPos]=move;
      }
      for(int x=0;x<jump;x++){
          xPos-=1;
          move+=1;
          graph[yPos][xPos]=move;
      }
  }
  for(int y=ceil(sqrt(wantedNum))-1;y>=0;y--){
      for(int x=0;x<ceil(sqrt(wantedNum));x++){
          std::cout<<std::setw(2)<<std::left<<graph[y][x]<<" ";
          if(graph[y][x]==wantedNum){
            wantedY=y;
            wantedX=x;
          }
      }
      std::cout<<std::endl;
  }
  std::cout<<wantedX+1<<" "<<wantedY+1;
}
