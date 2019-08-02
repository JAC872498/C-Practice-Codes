//"To Be Named" is its actual name
//The game will be a satire about all the overdone clichés of 'fantasy' games
#include <iostream>
#include <string>
#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

class basicEnemy{//Used as an interface class
	private:
		static std::string name;//Blank
		static std::string weaponName;//Fists
		static int health;//100
		static int attackPow;//10
		static int defencePow;//8
		static int magicPow;//0
		static int rangedPow;//0
	public:
		std::string attack(){
			return(name+" attacks with their "+weaponName+".\n"+name+" deals "+patch::to_string(attackPow)+" damage.\n");
		}
		void defend(){}
		
		std::string getName(){
			return(name);
		}
		std::string getWeaponName(){
			return(weaponName);
		}
		int getHealth(){
			return(health);
		}
		int getAttackPow(){
			return(attackPow);
		}
		int getDefencePow(){
			return(defencePow);
		}
		int getMagicPow(){
			return(magicPow);
		}
		int getRangedPow(){
			return(rangedPow);
		}
		void setName(std::string n){
			name=n;
		}
		void setWeaponName(std::string w){
			weaponName=w;
		}
		void setHealth(int h){
			health=h;
		}
		void setAttackPow(int a){
			attackPow=a;
		}
		void setDefencePow(int d){
			defencePow=d;
		}
		void setMagicPow(int m){
			magicPow=m;
		}
		void setRangedPow(int r){
			rangedPow=r;
		}
};

/*
Sword Guy
sword
100
12
10
0
0

Magic Guy
magic staff
100
14
8
2
0

Bow Guy
bow
60
4
4
0
8
*/
static std::string names[]={
	"Sword Guy","Maigc Guy","Bow Guy"
};
static std::string weaponNames[]={
	"sword","magic staff","bow"
};
static int health[]={
	100,100,60
};
static int attackPow[]={
	12,14,4
};
static int defensePow[]={
	10,8,4
};
static int magicPow[]={
	0,2,0
};
static int rangedPow[]={
	0,0,8
};

basicEnemy generateNewEnemy(int type){
	basicEnemy rtn;
	return(rtn);
}

int main(){
	bool turn=true;//True-player's turn, False-enemy's turn
	int currLevel=1;
	int playerHealth=100;
	int playerAttackPow=10;
	int playerDefencePow=8;
		
	//basicRangedGuy test=new basicRangedGuy();
	//std::cout<<test.attack();
		
	while(currLevel<=10){//10 levels in total
		for(int e=0;e<10;e++){//10 enemies per level
			if(playerHealth<=0){
				goto death;
			}
		}
		currLevel+=1;
	}
	return(0);
	death:
		std::cout<<"Deathed";
		return(0);
}