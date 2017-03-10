//Tic-tak-toe because I'm incredibly bored and have nothing else to do
#include <iostream>
#include <string>
#include <time.h>

int win(std::string grid, char myChoice, char comChoice){
    if(grid[0][0]){//You winning
    }else{
    }else{
    }else{
    }else{
    }else{
    }else{
    }else{
    }
    if(grid[0][0]){//Computer winning
    }else{
    }else{
    }else{
    }else{
    }else{
    }else{
    }else{
    }
    return 0;
}

int main(){
  srand(time(NULL));
  int myX=0;
  int myY=0;
  char myChoice;
  int comX=0;
  int comY=0;
  char comChoice;
  std::string grid[3][3]={
    {"-","-","-"},
    {"-","-","-"},
    {"-","-","-"}
  };
  if(rand()%2==0){//You start first
      myChoice='X';
      comChoice='O';
  }else{//Com start first
      myChoice='O';
      comChoice='X';
  }
  //while(win(grid, myChoice, comChoce)!=0){
      
  //}
  return 0;
}
