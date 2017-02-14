#include <iostream>

class Bunny{
    bool sex=rand()%2==0;//0\true==female; 1\false==male
    bool rad=rand()%50==0;//0\true==rad; 1-49\false=not rad
    int age=1;
    int seed = static_cast<int>(time(0));
    std::string colors[4]={"White","Brown","Black","Spotted"};
    std::string names[10]={"Bob","Crigg","Doorknob","Oil","Slam","Skellet0n","Jew","Emo Chick","T3mmi","3l1t3 hax0r"};
    std::string color=colors[rand()%4];
    std::string name=names[rand()%10];
    public:
        bool getSex(){return sex;}
        bool getRad(){return rad;}
        int getAge(){return age;}
        std::string getColor(){return color;}
        std::string getName(){return name;}
};

int main(){
   Bunny bun;
   std::cout<<srand (time (NULL));//WORK ON THIS
   //std::cout<<"Sex "<<bun.getSex()<<"\nRadioactive "<<bun.getRad()<<"\nAge "<<bun.getAge()<<"\nColor "<<bun.getColor()<<"\nName "<<bun.getName();
   return 0;
}
