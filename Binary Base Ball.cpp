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
  int hit=0;
  srand(time(NULL));
  bool playing=false//true if you're batting, false if enemy is batting
  while(outs!=3){
    if(rand()%4==1){
      outs+=1;
    }
    cout<<(rand()%4);
  }
  return 0;
}
