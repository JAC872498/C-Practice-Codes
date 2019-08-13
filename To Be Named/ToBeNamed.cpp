//"To Be Named" is its actual name
//The game will be a satire about all the overdone clichés of 'fantasy' games
#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <stdio.h>	/* printf, scanf, puts, NULL */
#include <stdlib.h>	/* srand, rand */

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
        std::string name;//Blank
		std::string weaponName;//Fists
		int health;//100
		int attackPow;//10
		int defencePow;//8
		int magicPow;//0
		int rangedPow;//0
	public:
		std::string attack(){
			return(name+" attacks with their "+weaponName+".\n"+name+" deals "+patch::to_string(attackPow)+" damage.\n");
		}
		std::string defend(){
            return(name+" defends themselves with their "+weaponName+".\nThey block"+patch::to_string(defencePow)+" damage.\n");
		}

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
	"Sword Guy","Magic Guy","Bow Guy"
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

basicEnemy generateNewEnemy(int type, std::string n[], std::string w[], int h[], int a[], int d[], int m[], int r[]){
	basicEnemy rtn;
	rtn.setName(n[type]);
	rtn.setWeaponName(w[type]);
	rtn.setHealth(h[type]);
	rtn.setAttackPow(a[type]);
	rtn.setDefencePow(d[type]);
	rtn.setMagicPow(m[type]);
	rtn.setRangedPow(r[type]);
	return(rtn);
}

int main(){
	basicEnemy enemy1;

	bool turn=true;//True-player's turn, False-enemy's turn
	int currLevel=1;
	int type;
	int playerHealth=100;
	int playerAttackPow=10;
	int playerDefencePow=8;

	while(currLevel<=10){//10 levels in total
		for(int e=0;e<10;e++){//10 enemies per level
			if(playerHealth<=0){
				type=rand()%sizeof(names);//random number
				enemy1=generateNewEnemy(type,names,weaponNames,health,attackPow,defensePow,magicPow,rangedPow);
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
