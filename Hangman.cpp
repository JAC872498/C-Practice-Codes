/*This is a simple hangman game that I'm making just to kill time*/

#include <iostream>
#include <bits/stdc++.h>

std::string changeWord(char wrd[], char c){
	std::string newWrd=wrd;
	for(int n=0;n<;n++){
		if(wrd[n]==c){
			
		}
	}
	return(newWrd);
}

int main(){
	std::string man[]={   "O",
					"\n/","|","\\",
					  "\n/","\\"};
	std::cout<<"Enter your word.\n";	
	std::string w;
	std::cin>>w;
	char word[w.length()+1];
	char guessed[w.length()+1];
	char guess;
	int tries=0;
	strcpy(word,w.c_str());
	while(tries<8){
	   	std::cout<<"Guess your letter.\n";
		std::cin>>guess;
	}
	return(0);
}
