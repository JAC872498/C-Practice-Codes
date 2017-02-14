#include <iostream>

class Bunny{
    bool sex=rand()%2==0;//0\true==female; 1\false==male
    bool rad=rand()%50==0;//0\true==rad; 1-49\false=not rad
    int age=1;
    int color=3;
    int name=5;
    public:
    int getColor(){
        return color;
    }
};

int main(){
   Bunny bun;
   return 0;
}
