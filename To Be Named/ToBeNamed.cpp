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
class basicEnemy{//Used as an interface class
	private:
		static std::string name;//Blank
		static std::string weaponName;//Fists
		static int health;//100
		static int attackPow;//10
		static int defencePow;//8
	public:
		std::string attack(){
			return(name+" attacks with their "+weaponName+".\n"+name+" deals "+patch::to_string(attackPow)+" damage.\n");
		}
		void defend(){}
};

int main(){
	bool turn=true;//True-player's turn, False-enemy's turn
	int currLevel=1;
	int playerHealth=100;
	int playerAttackPow=10;
	int playerDefencePow=8;
		
	basicRangedGuy test=new basicRangedGuy();
	std::cout<<test.attack();
		
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