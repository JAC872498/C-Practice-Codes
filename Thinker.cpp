/*
Something to make ideas for you
Randomly creates scenarios for stories/games/etc
*/
#include <iostream>
#include <stdlib.h>

std::string createStartingIdea(){
    //This generates the first ideas stating who, where, when, and why
    std::string rtn="You";//Who(expand this later?)
    std::string startingActions[]={" wake up"," arrive"," land"};
    std::string startingAreas[]={" within The City"," on the outskirts of the battlefield"};//Where
    std::string startingDate[]={" on the dawn of the final day"," as the plan is just about to start"};//When
    std::string startingReason[]={" to regain the crown"," you know what you must do"};//Why
    rtn+=startingActions[rand()%(sizeof(startingActions)/sizeof(*startingActions))];
    return(rtn);
}

int main(){
    std::cout<<createStartingIdea();
	return(0);
}
