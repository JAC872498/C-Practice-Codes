//"To Be Named" is its actual name
//The game will be a satire about all the overdone clich�s of 'fantasy' games
#include <iostream>

using namespace std;

class basicEnemy{//Used as an interface class
	private:
		int health;//100
		int attackPow;//10
		int defencePow;//8
	public:
		string attack(){}
		void defend(){}
};

class basicSwordGuy : public basicEnemy{
	private:
		int health;//100
		int attackPow;//12
		int defencePow;//10
	public:
		attack(){
			
		}
		defend(){
			
		}
};

class basicMagicGuy : public basicEnemy{
	private:
		int health;//100
		int attackPow;//14
		int defencePow;//8
		int magicPow;//2
	public:
		attack(){
			
		}
		defend(){
			
		}
};

class basicRangedGuy : public basicEnemy{
	private:
		int health;//60
		int attackPow;//4
		int defencePow;//4
		int rangedPow;//8
	public:
		attack(){
			
		}
		defend(){
			
		}
};

int main(){
	bool turn=true;//True-player's turn, False-enemy's turn
	int currLevel=1;
	int playerHealth=100;
	int playerAttackPow=10;
	int playerDefencePow=8;
		
	while(currLevel<=10){
		for(int e=0;e<10;e++){
			while
			if(playerHealth<=0){
				goto death;
			}
		}
		currLevel+=1;
	}
	return(0);
	death:
		cout<<"Deathed";
		return(0);
}