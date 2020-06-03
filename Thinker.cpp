/*
Something to make ideas for you
Randomly creates scenarios for stories/games/etc
Might have an added feature to display a little graphic about the story
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

class Starting{
private:
	std::string startingIdea="";
	std::string startingInventory="";
	std::string startingCliff="";

public:
	std::string createStartingIdea(){
		//This generates the first ideas stating who, where, when, and why
		startingIdea="You";//Who
		std::string startingActions[]={" wake up"," arrive"," land"};//Where
		std::string startingAreas[]={" within The City"," on the outskirts of the battlefield"};//Where
		std::string startingDate[]={". It is the dawn of the final day, it is now time",", as the plan is just about to start"};//When
		std::string startingReason[]={" to regain the crown",", you know what you must do"};//Why
		std::string startigFeeling[]={" scared of what's to come"," glad to finally get this over with"," like the plan shouldn't be going so smoothly"};//Feelings
		startingIdea+=startingActions[rand()%(sizeof(startingActions)/sizeof(*startingActions))];//This simply gets a random value of a array
		startingIdea+=startingAreas[rand()%(sizeof(startingAreas)/sizeof(*startingAreas))];
		startingIdea+=startingDate[rand()%(sizeof(startingDate)/sizeof(*startingDate))];
		startingIdea+=startingReason[rand()%(sizeof(startingReason)/sizeof(*startingReason))];
		startingIdea+=", you feel";
		startingIdea+=startigFeeling[rand()%(sizeof(startigFeeling)/sizeof(*startigFeeling))];
		startingIdea+=".";
		return(startingIdea);
	}

	std::string createStartingInventory(){
		//This generates the main "key thing" of the story and a few other tidbits
		startingInventory="\nYou look within your bag to check on";
		std::string startingKey[]={" the gold plated key"," the encrypted USB"," The One"};//The "key"
		std::string startingEnegy[]={" a few rotting apples"," your trusty blaster"," nothing, you're running out of supplies and time"};//Extra stuff
		std::string startingFeelingWords[]={" sad"," glad", " upset"," happy"," worried", " ecstatic"};//Feelings
		std::string startingFeelingAction[]={" that it hasn't been stolen"," that you got it this far"," that it's still asleep"};//Why
		startingInventory+=startingKey[rand()%(sizeof(startingKey)/sizeof(*startingKey))];
		startingInventory+=" along with";
		startingInventory+=startingEnegy[rand()%(sizeof(startingEnegy)/sizeof(*startingEnegy))];
		startingInventory+=". You're";
		startingInventory+=startingFeelingWords[rand()%(sizeof(startingFeelingWords)/sizeof(*startingFeelingWords))];
		startingInventory+=startingFeelingAction[rand()%(sizeof(startingFeelingAction)/sizeof(*startingFeelingAction))];
		startingInventory+=".";
		return(startingInventory);
	}

	std::string createStartingCliffhanger(){//Maybe expand this?
		//This creates a movie-esque "cliffhanger" for the story
		startingCliff="\nYou are";
		std::string startingCliffhanger[]={" are the last of your kind, the last of the"," on your way to change history for"};////Generic "dramatic" statement
		std::string startingRace[]={" the bee people"," the dragons"," the last 3 fans of Lawbreakers"," the resistance"};//The group you're part of
		startingCliff+=startingCliffhanger[rand()%(sizeof(startingCliffhanger)/sizeof(*startingCliffhanger))];
		startingCliff+=startingRace[rand()%(sizeof(startingRace)/sizeof(*startingRace))];
		startingCliff+=".";
		return(startingCliff);
	}
};

int main(){
<<<<<<< HEAD
	/*
	TODO:
	Have a window created to put the words
	Create a series of images that can be combined
	Create a way to combine images based on the generated stories
	*/
=======
>>>>>>> eea5ed8aace85649a665644c357b5c8218632020
	HANDLE hConsole;//Used to handle colors
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));//Generates random numbers
	int kolor=rand()%126;//Color number
	SetConsoleTextAttribute(hConsole, kolor);
	Starting start;
	std::cout<<start.createStartingIdea()<<std::endl;
	std::cout<<start.createStartingInventory()<<std::endl;
	std::cout<<start.createStartingCliffhanger()<<std::endl;

	return(0);
}
