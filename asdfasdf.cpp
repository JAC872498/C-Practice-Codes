/*pg # if http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf*/

#include <iostream>

int main(){
  int xPos=1,yPos=1,jump=1;
  std::cout<<xPos<<" "<<yPos<<"\n";
  for(int n=0;n<1;n++){
      yPos+=1;
      std::cout<<xPos<<" "<<yPos<<"\n";
      for(int x=0;x<jump;x++){
          xPos+=1;   
          std::cout<<xPos<<" "<<yPos<<"\n";
      }
      for(int y=0;y<jump;y++){
          yPos-=1;
          std::cout<<xPos<<" "<<yPos<<"\n";
      }
      jump+=1;
      xPos+=1;
      std::cout<<xPos<<" "<<yPos<<"\n";
      for(int y=0;y<jump;y++){
          yPos+=1;
          std::cout<<xPos<<" "<<yPos<<"\n";
      }
      for(int x=0;x<jump;x++){
          xPos-=1;
          std::cout<<xPos<<" "<<yPos<<"\n";
      }
      jump+=1;
  }
}
