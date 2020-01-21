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
	std::string startigFeeling[]={" scared of what's to come"," glad to finally get this over with"," like the plan shouldn't be going so smoothly"};
	rtn+=startingActions[rand()%(sizeof(startingActions)/sizeof(*startingActions))];
	rtn+=startingAreas[rand()%(sizeof(startingAreas)/sizeof(*startingAreas))];
	rtn+=startingDate[rand()%(sizeof(startingDate)/sizeof(*startingDate))];
	rtn+=startingReason[rand()%(sizeof(startingReason)/sizeof(*startingReason))];
	rtn+=", you feel";
	rtn+=startigFeeling[rand()%(sizeof(startigFeeling)/sizeof(*startigFeeling))];
	rtn+=".";
	return(rtn);
}

std::string createStartingInventory(){
	std::string rtn="\nYou look within your bag to check on";
	std::string startingKey[]={" the gold plated key"," the encrypted USB"," The One"};
	std::string startingEnegy[]={" a few rotting apples"," your trusty blaster"," nothing, you're running out of supplies and time"};
	rtn+=startingKey[rand()%(sizeof(startingKey)/sizeof(*startingKey))];
	rtn+=" along with";
	rtn+=startingEnegy[rand()%(sizeof(startingEnegy)/sizeof(*startingEnegy))];
	rtn+=".";
	return(rtn);
}

int main(){
	srand(time(NULL));//Generates random numbers
	std::cout<<createStartingIdea();
	std::cout<<createStartingInventory();
	return(0);
}
