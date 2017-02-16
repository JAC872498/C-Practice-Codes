#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

class Bunny{
    private:
        std::string colors[4]={"White","Brown","Black","Spotted"};
        std::string names[10]={"Bob","Crigg","Doorknob","Oil","Slam","Skellet0n","Jew","Emo Chick","T3mmi","3l1t3 hax0r"};
    public:
        int age=0;
        bool sex=rand()%2;//1\true==female; 0\false==male
        bool rad=rand()%50==0;//0\true==rad; 1-49\false=not rad
        bool alive=1;
        std::string color=colors[rand()%4];
        std::string name=names[rand()%10];
        void setAll(int num1, int num2, int num3, int num4){sex=num1;rad=(num2==0);color=colors[num3];name=names[num4];}
        void description(){std::cout<<"Sex "<<sex<<"\nRadioactive "<<rad<<"\nAge "<<age<<"\nColor "<<color<<"\nName "<<name<<"\n";}

};

int mul(std::vector<Bunny> stuff){//0==all bunnies dead, 1==no new bunnies, 2==new bunnies
    bool male=0;
    bool female=0;
    bool al=0;
    for(int x=0;x<stuff.size();x++){
        if(stuff[x].sex==1 && stuff[x].alive==1 && stuff[x].age>=2){
            female=1;
            al=1;
        }else if(stuff[x].sex==0 && stuff[x].alive==1 && stuff[x].age>=2){
            male=1;
            al=1;
        }else if(stuff[x].alive==1){
            al=1;
        }
    }
    if(male && female){return 2;
    }else if(al){return 1;
    }return 0;
}

int main(){
    srand(time(0));
    std::vector<Bunny>bunny(5);
    for(int x=0;x<bunny.size();x++){
        bunny[x].setAll(rand()%2,rand()%50,rand()%4,rand()%10);
        /*bunny[x].description();
        std::cout<<"\n";*/
    }
    while(mul(bunny)!=0){
        std::cout<<bunny[0].age;
        for(int x=0;x<bunny.size();x++){
            bunny[x].age=bunny[x].age+1;
            if(bunny[x].age==11){
                bunny[x].alive=0;
            }
        }
    }
    return 0;
}
