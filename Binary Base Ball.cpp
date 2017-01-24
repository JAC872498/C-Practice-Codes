#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
  int onFirst=0;
  int onSecond=0;
  int onThird=0;
  int myScore=0;
  int enemyScore=0;
  int outs=0;
  int hit=rand()%100;//50-100=out, 26-
  srand(time(NULL));
  bool playing=false;//true if you're batting, false if enemy is batting
  if(playing){
      while(outs!=3){
          hit=rand()%100;
          if(hit>=50){
            outs+=1;
          }else{
            cout<<"You got a hit\n";  
          }
      }
  }else{
      while(outs!=3){
          hit=rand()%100;
          if(hit>=50){
            outs+=1;
          }else{
            cout<<"Enemy got a hit\n";  
          }
      }
  }
  return 0;
}
