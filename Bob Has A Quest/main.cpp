/*A very crude and basic ASCII art game about a man named Bob.*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string>

void clearScene(char fill=' ') { 
	COORD tl={0,0};
	CONSOLE_SCREEN_BUFFER_INFO s;
	HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);   
	GetConsoleScreenBufferInfo(console, &s);
	DWORD written, cells=s.dwSize.X*s.dwSize.Y;
	FillConsoleOutputCharacter(console, fill, cells, tl, &written);
	FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
	SetConsoleCursorPosition(console, tl);
}

int main(){
	int choiceNum=0;
	int storyChoice=0;
	std::string title="Bob";
	
	std::cout<<title<<" Has A Quest.\n\n1. He accepts the quest\n2. He rejects his fate\n";
	std::cin>>choiceNum;
	while(choiceNum!=1){
		std::cout<<"NO ONE MAY REJECT THEIR FATE!\n";
		std::cin>>choiceNum;
	}
	clearScene();
	std::cout<<title<<" accepts his quest, whatever it might be.\nSpeaking of which, who is Bob?\n\n";
	std::cout<<"1. A middle-aged peasant.\n2. A Chinese scholar.\n3. A Spanish sailor.\n4. A Moroccan merchant.\n5. A wage-slave Burger King worker.\n";
	std::cin>>storyChoice;
	while(storyChoice<1 || storyChoice>5){
		std::cout<<"Sorry, there have only been 5 people named Bob in all of history.\n";
		std::cin>>storyChoice;
	}
	clearScene();
	std::cout<<"So, Bob is a";
	switch(storyChoice){
		
		case 1:
			title="Bob the peasant";
			std::cout<<" peasant from 1259 from Russia.\n";
			std::cout<<"Recently these new guys have showed up in "<<title<<"'s town, they've got tiny horses and cool bows.\n";
			std::cout<<"They can be a bit rude and quite like killing a lot, but other than that they're quite nice.\n";
			std::cout<<"So nice, in fact, that they've taken "<<title<<" on a free 'vacation' to the east.\n";
			std::cout<<"Ok, so maybe they didn't ask "<<title<<", or even tell him that he was going on 'vacation'.\n";
			std::cout<<"Ok, so maybe they burnt down his house as soon as they saw it.\n";
			std::cout<<"Ok, so maybe they murdered all of the guards in the town.\n";
			std::cout<<"Ok, so maybe "<<title<<" is being kidnapped.\n";
			std::cout<<"";
			break;
		
		case 2:
			title="Bob the scholar";
			std::cout<<" one of the who can read in 1271 China, he's kinda a big deal.\n";
			std::cout<<"He went to school, so he's seen as a demi-god.\n";
			std::cout<<title<<" also knows of some far off land across the vast deserts.\n";
			std::cout<<title<<" has also spoke to some pale dude who says he's from there, cool guy, has some cool spices.\n";
			std::cout<<"";
			break;
		
		case 3:
			title="Bob the sailor";
			std::cout<<" guy paid to be on a ship during 1513, where is he going? Who knows?.\n";
			std::cout<<"He's also one of the only ones left alive.\n";
			std::cout<<"And he's one of the only ones left with any rations.\n";
			std::cout<<"All in all, things could be better.\n";
			std::cout<<"";
			break;
		
		case 4:
			title="Bob the merchant";
			std::cout<<"ble to do basic math, meaning he's one of the richest people in 1062.\n";
			std::cout<<"You'd assume that would be great. But there's not much you can buy in 1062.\n";
			break;
		
		case 5:
			std::cout<<" guy named Bob, nothing has changed.\n";
			std::cout<<"Why did you chose this path? Why did you think this was the best choice?\n";
			std::cout<<"Did you think it would be funny? I have to write pages about a nobody.\n";
			std::cout<<"You could have sail the oceans, you could have watched history unfold, but no, you want to work at Burger King.\n";
			std::cout<<"I didn't even have anything good, I just wanted a 5th option so I made something that NO ONE SHOULD HAVE PICKED.\n";
			std::cout<<"Who cares about the year. Who cares about the location. You're a faceless wage slave, I hope you're happy.";
			std::cout<<"";
			break;
		
	}
	return(0);
}
