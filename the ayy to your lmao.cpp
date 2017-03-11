//Tic-tak-toe because I'm incredibly bored and have nothing else to do
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

int win(char grid, char myChoice, char comChoice, int turns){//0==no win, 1==you win, 2== computer win
    if(turns>5){return 1;}
	if(grid[0][0]==myChoice&&grid[1][0]==myChoice&&grid[2][0]==myChoice){return 1;}//You winning
    else if(grid[0][1]==myChoice&&grid[1][1]==myChoice&&grid[2][1]==myChoice){return 1;}
    else if(grid[0][2]==myChoice&&grid[1][2]==myChoice&&grid[1][2]==myChoice){return 1;}
    else if(grid[0][0]==myChoice&&grid[0][1]==myChoice&&grid[0][2]==myChoice){return 1;}
    else if(grid[1][0]==myChoice&&grid[1][1]==myChoice&&grid[1][2]==myChoice){return 1;}
    else if(grid[2][0]==myChoice&&grid[2][1]==myChoice&&grid[2][2]==myChoice){return 1;}
    else if(grid[0][0]==myChoice&&grid[1][1]==myChoice&&grid[2][2]==myChoice){return 1;}
    else if(grid[0][2]==myChoice&&grid[1][1]==myChoice&&grid[2][0]==myChoice){return 1;}
    
    if(grid[0][0]==comChoice&&grid[1][0]==comChoice&&grid[2][0]==comChoice){return 2;}//Computer winning
    else if(grid[0][1]==comChoice&&grid[1][1]==comChoice&&grid[2][1]==comChoice){return 2;}
    else if(grid[0][2]==comChoice&&grid[1][2]==comChoice&&grid[1][2]==comChoice){return 2;}
    else if(grid[0][0]==comChoice&&grid[0][1]==comChoice&&grid[0][2]==comChoice){return 2;}
    else if(grid[1][0]==comChoice&&grid[1][1]==comChoice&&grid[1][2]==comChoice){return 2;}
    else if(grid[2][0]==comChoice&&grid[2][1]==comChoice&&grid[2][2]==comChoice){return 2;}
    else if(grid[0][0]==comChoice&&grid[1][1]==comChoice&&grid[2][2]==comChoice){return 2;}
    else if(grid[0][2]==comChoice&&grid[1][1]==comChoice&&grid[2][0]==comChoice){return 2;}
    return 0;
}

int main(){
  srand(time(NULL));
  int myX=0;
  int myY=0;
  char myChoice;
  int comX=0;
  int comY=0;
  int turns=0; 
  char comChoice;
  char grid[3][3]={
    {'-','-','-'},
    {'-','-','-'},
    {'-','-','-'}
  };
  if(rand()%2==0){//You start first
      myChoice='X';
      comChoice='O';
      std::cout<<"You go\n";
  }else{//Com start first
      myChoice='O';
      comChoice='X';
      std::cout<<"Enemy go\n";
  }
  turns++;
  while(win(grid, myChoice, comChoce)!=0){
      if(turns%2==0&&myChoice='X'){
		  std::cout<<"Enemy goes\n";
	  }else{
		  std::cout<<"You go\n";
	  }
  }
  	std::cout<<grid[0][0];
  return 0;
}
