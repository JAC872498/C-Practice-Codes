//Tic-tak-toe because I'm incredibly bored and have nothing else to do
#include <iostream>
#include <string>
#include <time.h>

int main(){
  srand (time(NULL));
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
  return 0;
}
