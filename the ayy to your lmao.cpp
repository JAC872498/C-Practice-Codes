//Tic-tak-toe because I'm incredibly bored and have nothing else to do
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
int win(std::string grid[][3], std::string myChoice, std::string comChoice, int turns){//0.compare()no win, 1.compare()you win, 2.compare() computer win
    if(turns>5){return 1;}
	if(grid[0][0].compare(myChoice)&&grid[1][0].compare(myChoice)&&grid[2][0].compare(myChoice)){return 1;}//You winning
    else if(grid[0][1].compare(myChoice)&&grid[1][1].compare(myChoice)&&grid[2][1].compare(myChoice)){return 1;}
    else if(grid[0][2].compare(myChoice)&&grid[1][2].compare(myChoice)&&grid[1][2].compare(myChoice)){return 1;}
    else if(grid[0][0].compare(myChoice)&&grid[0][1].compare(myChoice)&&grid[0][2].compare(myChoice)){return 1;}
    else if(grid[1][0].compare(myChoice)&&grid[1][1].compare(myChoice)&&grid[1][2].compare(myChoice)){return 1;}
    else if(grid[2][0].compare(myChoice)&&grid[2][1].compare(myChoice)&&grid[2][2].compare(myChoice)){return 1;}
    else if(grid[0][0].compare(myChoice)&&grid[1][1].compare(myChoice)&&grid[2][2].compare(myChoice)){return 1;}
    else if(grid[0][2].compare(myChoice)&&grid[1][1].compare(myChoice)&&grid[2][0].compare(myChoice)){return 1;}
    
    if(grid[0][0].compare(comChoice)&&grid[1][0].compare(comChoice)&&grid[2][0].compare(comChoice)){return 1;}//You winning
    else if(grid[0][1].compare(comChoice)&&grid[1][1].compare(comChoice)&&grid[2][1].compare(comChoice)){return 1;}
    else if(grid[0][2].compare(comChoice)&&grid[1][2].compare(comChoice)&&grid[1][2].compare(comChoice)){return 1;}
    else if(grid[0][0].compare(comChoice)&&grid[0][1].compare(comChoice)&&grid[0][2].compare(comChoice)){return 1;}
    else if(grid[1][0].compare(comChoice)&&grid[1][1].compare(comChoice)&&grid[1][2].compare(comChoice)){return 1;}
    else if(grid[2][0].compare(comChoice)&&grid[2][1].compare(comChoice)&&grid[2][2].compare(comChoice)){return 1;}
    else if(grid[0][0].compare(comChoice)&&grid[1][1].compare(comChoice)&&grid[2][2].compare(comChoice)){return 1;}
    else if(grid[0][2].compare(comChoice)&&grid[1][1].compare(comChoice)&&grid[2][0].compare(comChoice)){return 1;}
    return 0;
}

int main(){
  srand(time(NULL));
  int myX=0;
  int myY=0;
  std::string myChoice;
  int comX=0;
  int comY=0;
  int turns=0; 
  std::string comChoice;
  std::string grid[3][3]={
    {"-","-","-"},
    {"-","-","-"},
    {"-","-","-"}
  };
  if(rand()%2==0){//You start first
      myChoice="X";
      comChoice="O";
      std::cout<<"You go\n";
  }else{//Com start first
      myChoice="O";
      comChoice="X";
      std::cout<<"Enemy go\n";
  }
  turns++;
   while(win(grid, myChoice, comChoice)!=0){
      if(turns%2==0&&myChoice.compare("X")){
		  std::cout<<"Enemy goes\n";
	  }else{
		  std::cout<<"You go\n";
	  }
  }
  	//std::cout<<grid[0][0].compare(myChoice);
  return 0;
}
