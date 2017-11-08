/*pg 299 if http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf*/

#include <iostream>

int main(){
  int xPos=1,yPos=1,jump=0,move=1;
  std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
  for(int n=0;n<3;n++){
      jump+=1;
      yPos+=1;
      move+=1;
      std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      for(int x=0;x<jump;x++){
          xPos+=1;   
          move+=1;
          std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
      for(int y=0;y<jump;y++){
          yPos-=1;
          move+=1;
          std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
      jump+=1;
      xPos+=1;
      move+=1;
      std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      for(int y=0;y<jump;y++){
          yPos+=1;
          move+=1;
          std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
      for(int x=0;x<jump;x++){
          xPos-=1;
          move+=1;
          std::cout<<move<<" "<<xPos<<" "<<yPos<<"\n";
      }
  }
}
