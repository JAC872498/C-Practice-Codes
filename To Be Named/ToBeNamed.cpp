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
		std::string name;//Blank
		std::string weaponName;//Fists
		int health;//100
		int attackPow;//10
		int defencePow;//8
	public:
		std::string attack(){
			return(name+" attacks with their "+weaponName+".\n"+name+" deals "+patch::to_string(attackPow)+" damage.\n");
		}
		void defend(){}
};

class basicSwordGuy : public basicEnemy{
	private:
		std::string name="Sword Guy";
		std::string weaponName="sword";
		int health;//100
		int attackPow;//12
		int defencePow;//10
	public:
};

class basicMagicGuy : public basicEnemy{
	private:
		std::string name="Magic Guy";
		std::string weaponName="magic staff";
		int health;//100
		int attackPow;//14
		int defencePow;//8
		int magicPow;//2
	public:
};

class basicRangedGuy : public basicEnemy{
	private:
		std::string="Bow Guy";
		std::string="Bow";
		int health;//60
		int attackPow;//4
		int defencePow;//4
		int rangedPow;//8
	public:
};

int main(){
	bool turn=true;//True-player's turn, False-enemy's turn
	int currLevel=1;
	int playerHealth=100;
	int playerAttackPow=10;
	int playerDefencePow=8;
		
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