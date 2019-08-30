//"To Be Named" is its actual name
//The game will be a satire about all the overdone clichés of 'fantasy' games
#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <stdio.h>	/* printf, scanf, puts, NULL */
#include <stdlib.h>	/* srand, rand */

namespace patch{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

class basicUnit{//Used as an interface class
	private:
        std::string name;
		std::string weaponName;
		int health;
		int attackPow;
		int defencePow;
		int magicPow;
		int rangedPow;
	public:
		std::string attack(basicUnit target){
            attackPow=rand()%(attackPow-2)+(attackPow+2);
			return(name+" attacks with their "+weaponName+".\n"+name+" deals "+patch::to_string(attackPow)+" damage.\n");
		}
		std::string defend(){
		    defencePow=rand()%(defencePow-2)+(defencePow+2);
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
Person
really tight fists
100
10
8
0
0

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
	"Person","Sword Guy","Magic Guy","Bow Guy"
};
static std::string weaponNames[]={
	"really tight fists","sword","magic staff","bow"
};
static int health[]={
	100,100,100,60
};
static int attackPow[]={
	12,12,14,4
};
static int defensePow[]={
	10,10,8,4
};
static int magicPow[]={
	0,0,2,0
};
static int rangedPow[]={
	0,0,0,8
};

basicUnit generateNewEnemy(int type, std::string n[], std::string w[], int h[], int a[], int d[], int m[], int r[]){
	basicUnit rtn;
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
	basicUnit enemy1;
	basicUnit player;
    player=generateNewEnemy(0,names,weaponNames,health,attackPow,defensePow,magicPow,rangedPow);

	bool turn=true;//True-player's turn, False-enemy's turn
	int currLevel=1;
	int e=0;
	int type;

	while(currLevel<=10){//10 levels in total
		while(e<10){//10 enemies per level
            type=rand()%e;//random number
            enemy1=generateNewEnemy(type,names,weaponNames,health,attackPow,defensePow,magicPow,rangedPow);
			while(enemy1.getHealth()>0){
                if(turn){//Player attacks
                    enemy1.defend();
                    player.attack(enemy1);
                }else{//Player defends
                    player.defend();
                    enemy1.attack(player);
                }
                if(player.getHealth()<=0){
                    std::cout<<"Death";
                    //Warp to death screen
                }
			}
		}
		currLevel+=1;
	}
	return(0);
}
