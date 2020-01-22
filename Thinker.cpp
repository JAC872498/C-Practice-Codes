/*
Something to make ideas for you
Randomly creates scenarios for stories/games/etc
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

std::string createStartingIdea(){
	//This generates the first ideas stating who, where, when, and why
	std::string rtn="You";//Who(expand this later?)
	std::string startingActions[]={" wake up"," arrive"," land"};
	std::string startingAreas[]={" within The City"," on the outskirts of the battlefield"};//Where
	std::string startingDate[]={". It is the dawn of the final day, it is now time",", as the plan is just about to start"};//When
	std::string startingReason[]={" to regain the crown",", you know what you must do"};//Why
	std::string startigFeeling[]={" scared of what's to come"," glad to finally get this over with"," like the plan shouldn't be going so smoothly"};//Feelings
	rtn+=startingActions[rand()%(sizeof(startingActions)/sizeof(*startingActions))];//This simply gets a random value of a array
	rtn+=startingAreas[rand()%(sizeof(startingAreas)/sizeof(*startingAreas))];
	rtn+=startingDate[rand()%(sizeof(startingDate)/sizeof(*startingDate))];
	rtn+=startingReason[rand()%(sizeof(startingReason)/sizeof(*startingReason))];
	rtn+=", you feel";
	rtn+=startigFeeling[rand()%(sizeof(startigFeeling)/sizeof(*startigFeeling))];
	rtn+=".";
	return(rtn);
}

std::string createStartingInventory(){
	//This generates the main "key thing" of the story and a few other tidbits
	std::string rtn="\nYou look within your bag to check on";
	std::string startingKey[]={" the gold plated key"," the encrypted USB"," The One"};//The "key"
	std::string startingEnegy[]={" a few rotting apples"," your trusty blaster"," nothing, you're running out of supplies and time"};//Extra stuff
	std::string startingFeelingWords[]={" sad"," glad", "upset"," happy"," worried", "ecstatic"};//Feelings
	std::string startingFeelingAction[]={" that it hasn't been stolen"," that you got it this far"," that it's still asleep"};//Why
	rtn+=startingKey[rand()%(sizeof(startingKey)/sizeof(*startingKey))];
	rtn+=" along with";
	rtn+=startingEnegy[rand()%(sizeof(startingEnegy)/sizeof(*startingEnegy))];
	rtn+=". You're";
	rtn+=startingFeelingWords[rand()%(sizeof(startingFeelingWords)/sizeof(*startingFeelingWords))];
	rtn+=startingFeelingAction[rand()%(sizeof(startingFeelingAction)/sizeof(*startingFeelingAction))];
	rtn+=".";
	return(rtn);
}

std::string createStartingCliffhanger(){//Maybe expand this?
	//This creates a movie-esque "cliffhanger" for the story
	std::string rtn="\nYou are";
	std::string startingCliffhanger[]={" are the last of your kind, the last of the"," on your way to change history for"};////Generic "dramatic" statement
	std::string startingRace[]={" the bee people"," the dragons"," the last 3 fans of Lawbreakers"," the resistance"};//The group you're part of
	rtn+=startingCliffhanger[rand()%(sizeof(startingCliffhanger)/sizeof(*startingCliffhanger))];
	rtn+=startingRace[rand()%(sizeof(startingRace)/sizeof(*startingRace))];
	rtn+=".";
	return(rtn);
}

int main(){
	srand(time(NULL));//Generates random numbers
	std::cout<<createStartingIdea();
	std::cout<<createStartingInventory();
	std::cout<<createStartingCliffhanger();
	return(0);
}
