#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
  bool onFirst=false;
  bool onSecond=false;
  bool onThird=false;
  int myScore=0;
  int enemyScore=0;
  int outs=0;
  int hit=rand()%5;
  srand(time(NULL));
  bool playing=false;//true if you're batting, false if enemy is batting
  if(playing){
      while(outs!=3){
          hit=rand()%5;
      }
  }else{
      while(outs!=3){
          hit=rand()%5;
      }
  }
  return 0;
}
