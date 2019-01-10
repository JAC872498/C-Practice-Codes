/*This is a simple hangman game that I'm making just to kill time*/

#include <iostream>

int main(){
  std::string[] man=new std::string[1];
  std::string word;
  std::string guess;
  int tries=0;
  while(tries<8){
    std::cout<<"Guess your letter.\n";
    std::cin>>guess;
  }
  return(0);
}
