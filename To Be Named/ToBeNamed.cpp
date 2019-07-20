//"To Be Named" is its actual name
//The game will be a satire about all the overdone clichés of 'fantasy' games
#include <iostream>

using namespace std;

class basicEnemy{//Used as an interface class
	private:
		int health;
		int attackPow;
		int defencePow;
	void attack(){}
	void defend(){}
};

class basicSwordGuy : public basicEnemy{
	private:
		health=100;
		attackPow=12;
		defencePow=10;
};

class basicMagicGuy : public basicEnemy{
	private:
		health=100;
		attackPow=14;
		defencePow=8;
};

class basicRangedGuy : public basicEnemy{
	private:
		health=60;
		attackPow=6;
		defencePow=4;
		
}; 

int main(){
	bool turn=true;//True-player's turn, False-enemy's turn
	int playerHealth=100;
	int playerAttackPow=10;
	int playerDefencePow=8;
	while(playerHealth>0){
		playerHealth-=1;
	}
	return(0);
}