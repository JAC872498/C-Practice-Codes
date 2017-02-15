#include <iostream>
#include <random>
#include <chrono> 

class Bunny{
    bool sex=std::uniform_int_distribution<>(0,1)(eng);==0;//0\true==female; 1\false==male
    bool rad=std::uniform_int_distribution<>(0,49)(eng);==0;//0\true==rad; 1-49\false=not rad
    int age=1;
    std::string colors[4]={"White","Brown","Black","Spotted"};
    std::string names[10]={"Bob","Crigg","Doorknob","Oil","Slam","Skellet0n","Jew","Emo Chick","T3mmi","3l1t3 hax0r"};
    std::string color=colors[std::uniform_int_distribution<>(0,3)(eng)];
    std::string name=names[std::uniform_int_distribution<>(0,9)(eng)];
    public:
        bool getSex(){return sex;}
        bool getRad(){return rad;}
        int getAge(){return age;}
        std::string getColor(){return color;}
        std::string getName(){return name;}
    private:
        
};

int main(){
   Bunny bun;
   std::cout<<"Sex "<<bun.getSex()<<"\nRadioactive "<<bun.getRad()<<"\nAge "<<bun.getAge()<<"\nColor "<<bun.getColor()<<"\nName "<<bun.getName();
   return 0;
}
