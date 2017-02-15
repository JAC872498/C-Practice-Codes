#include <iostream>
#include <cstdlib>
#include <ctime>

class Bunny{
    bool sex=rand()%2==0;//0\true==female; 1\false==male
    bool rad=rand()%50==0;//0\true==rad; 1-49\false=not rad
    int age=1;
    std::string colors[4]={"White","Brown","Black","Spotted"};
    std::string names[10]={"Bob","Crigg","Doorknob","Oil","Slam","Skellet0n","Jew","Emo Chick","T3mmi","3l1t3 hax0r"};
    std::string color=colors[rand()%4];
    std::string name=names[rand()%10];
    public:
        void setAll(int num1, int num2, int num3, int num4){sex=(num1==0);rad=(num2==0);color=colors[num3];name=names[num4];}
        void getAll(){std::cout<<"Sex "<<sex<<"\nRadioactive "<<rad<<"\nAge "<<age<<"\nColor "<<color<<"\nName "<<name<<"\n";}
        bool getSex(){return sex;}
        bool getRad(){return rad;}
        int getAge(){return age;}
        std::string getColor(){return color;}
        std::string getName(){return name;}
    private:
        
};

int main(){
   Bunny bun;
   srand(time(0));
   bun.setAll(rand()%2,rand()%50,rand()%4,rand()%10);
   bun.getAll();
   return 0;
}
