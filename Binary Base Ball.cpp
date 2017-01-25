#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int* hitSingle(int base[]){
    base[0]+=1;
    while(base[0]>=2||base[1]>=2||base[2]>=2){
        if(base[0]>=2){
            base[0]=1;
            base[1]+=1;
        }
        if(base[1]>=2){
            base[1]=1;
            base[2]+=1;
        }
        if(base[2]>=2){
            base[2]=1;
            base[3]+=1;
        }
    }
    return base;
}
/*int* hitDouble(int base[]){
    return base;
}
int* hitTriple(int base[]){ TODO: finish these
    return base;
}
int* hitHome(int base[]){
    return base;
}*/

int main(){
    int b[4]={0,0,0,0};
    int *bases;
    int myScore=0;
    int enemyScore=0;
    int outs=0;
    int hit=rand()%100;//50-100=out, 50-30=single, 30-15=double, 15-5=triple, 5-0=home run
    srand(time(NULL));
    bool playing=false;//true if you're batting, false if enemy is batting
    //TODO:
    //add for loop determining innings
    //change playing each turn
    //revert 'b' to all 0
    for(int inning=0;inning<18;inning++){
        if((inning+1)%2==0){
            playing=true;
        }else{
            playing=false;
        }
        if(playing){
            while(outs!=3){
                hit=rand()%100;
                if(hit>=50){
                    outs+=1;
                }else if(hit>=30){
                    bases=hitSingle(b);
                }else if(hit>=15){
                    //double
                }else if(hit>=5){
                    //triple  
                }else if(hit>=0){
                    //home run
                }
            }
            myScore+=bases[3];
        }else{
            while(outs!=3){
                hit=rand()%100;
                if(hit>=50){
                    outs+=1;
                }else if(hit>=30){
                    bases=hitSingle(b);
                }else if(hit>=15){
                    //double
                }else if(hit>=5){
                    //triple  
                }else if(hit>=0){
                    //home run  
                }
            }
            enemyScore+=bases[3];
        }
    }
    return 0;
}
