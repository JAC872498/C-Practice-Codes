//Tic-tak-toe because I'm incredibly bored and have nothing else to do
//It's actualy fun to make
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
int win(std::string grid[][3], std::string myChoice, std::string comChoice){//0==no win, 1==you win, 2==computer win
    /*if(grid[0][0].compare(myChoice)&&grid[1][0].compare(myChoice)&&grid[2][0].compare(myChoice)){return 1;}//You winning
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
    */return 0;
}

int main(){
  srand(time(NULL));
  int myX=5;
  int myY=2;
  std::string myChoice;
  int comX=rand()%3;
  int comY=rand()%3;
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
      std::cout<<"You start\nEnter X\n";
	  std::cin>>myX;
	  std::cout<<"Enter Y\n";
	  std::cin>>myY;
      grid[myX-1][myY-1]=myChoice;
  }else{//Com start first
      myChoice="O";
      comChoice="X";
      std::cout<<"Enemy starts\n";
      grid[comX][comY]=comChoice;
  }
  turns++;
   while(win(grid, myChoice, comChoice)==0){
	  if(turns==9){
		  break;
	  }
      for(int x=0;x<3;x++){for(int y=0;y<3;y++){std::cout<<grid[y][x];}std::cout<<"\n";}
	  if((turns%2==0&&myChoice.compare("X"))||(turns%2!=0&&myChoice.compare("O"))){
		  std::cout<<"Enemy goes\n";
		  comX=rand()%3;
 	  	  comY=rand()%3;
		  while(grid[comX][comY]!="-"){
		  	  comX=rand()%3;
		  	  comY=rand()%3;
		  }
		  grid[comX][comY]=comChoice;
	  }else{
		  std::cout<<"You go\n";
 	  	  std::cout<<"Enter X\n";
  	  	  std::cin>>myX;
		  std::cout<<"Enter Y\n";
	  	  std::cin>>myY;
		  while(grid[myX-1][myY-1]!="-"){
		  	  std::cout<<"Enter X\n";
		  	  std::cin>>myX;
		  	  std::cout<<"Enter Y\n";
		  	  std::cin>>myY;
	  	  }
		  grid[myX-1][myY-1]=myChoice;
	  }
	  turns++;
  }
  if(win(grid, myChoice, comChoice)==1){
	  std::cout<<"You win";
  }else if(win(grid, myChoice, comChoice)==2){
	  std::cout<<"Enemy wins";
  }else{
	  std::cout<<"Nobody wins";
  }
  return 0;
}
