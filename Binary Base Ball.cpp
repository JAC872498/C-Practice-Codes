#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int single(int base[]){
    base[0]+=1;
    while(base[0]==2||base[1]==3||base[2]==2){
        
    }
}

int main(){
  int bases[3]={0,0,0};
  int myScore=0;
  int enemyScore=0;
  int outs=0;
  int hit=rand()%100;//50-100=out, 50-30=single, 30-15=double, 15-5=triple, 5-0=home run
  srand(time(NULL));
  bool playing=false;//true if you're batting, false if enemy is batting
  if(playing){
      while(outs!=3){
          hit=rand()%100;
          if(hit>=50){
            outs+=1;
          }else if(hit>=30){
            //single
          }else if(hit>=15){
            //double
          }else if(hit>=5){
            //triple  
          }else if(hit>=0){
            //home run
          }
      }
  }else{
      while(outs!=3){
          hit=rand()%100;
          if(hit>=50){
            outs+=1;
          }else if(hit>=30){
            //single  
          }else if(hit>=15){
            //double
          }else if(hit>=5){
            //triple  
          }else if(hit>=0){
            //home run  
          }
      }
  }
  return 0;
}
