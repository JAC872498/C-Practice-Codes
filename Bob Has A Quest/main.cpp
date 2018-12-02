/*A very crude and basic ASCII art game*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

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
	std::cout<<"Bob Has A Quest.\n\n1. He accepts the quest\n2. He rejects his fate\n";
	std::cin>>choiceNum;
	while(choiceNum!=1){
		std::cout<<"NO ONE MAY REJECT THEIR FATE!\n";
		std::cin>>choiceNum;
	}
	clearScene();
	std::cout<<"Bob accepts his quest, whatever it might be.\nSpeaking of which, who is Bob?\n\n";
	std::cout<<"1. A middle-aged peasant.\n2. A Chinese scholar.\n3. A Spanish sailor.\n4. A Moroccan merchant.\n5. A wage-slave Burger King worker.";
	std::cin>>storyChoice;
	while(storyChoice<1 || storyChoice>5){
		std::cout<<"Sorry, there have only been 5 people named Bob in all of history.";
		std::cin>>storyChoice;
	}
	clearScene();
	std::cout<<"So, Bob is a";
	switch(storyChoice){
		case 1:
			std::cout<<" peasant from #### from Russia.\n\n";
			break;
		case 2:
			std::cout<<" one of the who can read in 1271 China, he's kinda a god due to that fact.\n\n";
			break;
		case 3:
			std::cout<<" guy paid to be on a ship during ####, where is he going? Who knows?.\n\n";
			break;
		case 4:
			std::cout<<"ble to do basic math, meaning he's one of the richest people in ####.\n\n";
			break;
		case 5:
			std::cout<<" guy named Bob, nothing has changed.\n";
			std::cout<<"Why did you chose this path? Why did you think this was the best choice?\n";
			std::cout<<"Did you think it would be funny? I have to write pages about a nobody.\n";
			std::cout<<"You could have sail the oceans, you could have watched history unfold, but no, you want to work at Burger King.\n";
			break;
	}
	return(0);
}
