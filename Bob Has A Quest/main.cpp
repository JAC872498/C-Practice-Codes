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
	std::cout<<"Bob Has A Quest.\n\n1. He accepts the quest\n2. He rejects his fate\n";
	std::cin>>choiceNum;
	while(choiceNum!=1){
		std::cout<<"NO ONE MAY REJECT THEIR FATE!\n";
		std::cin>>choiceNum;
	}
	clearScene();
	std::cout<<"Bob accepts his quest, whatever it might be.\n Speaking of which, who is Bob?";
	std::cout<<"1. A middle-aged peasant.\n2. A Chinese scholar.\n3. A Spanish sailor.\n4. A Moroccan merchant.\n5. A wage-slave Burger King worker.";
	std::cin>>choiceNum;
	while(choiceNum<1 || choiceNum>5){
		std::cout<<"Sorry, there have only been 5 people named Bob in all of history.";
		std::cin>>choiceNum;
	}
	clearScene();
	
	return(0);
}
