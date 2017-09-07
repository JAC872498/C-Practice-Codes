/*This basicly takes a sentance and moves every letter one to the right(excluding \, ', =, and /)*/

#include <iostream>
#include <string>
std::string change(std::string s){
	std::string l1[13]={"`","1","2","3","4","5","6","7","8","9","0","-","="};
	std::string l2[13]={"q","w","e","r","t","y","u","i","o","p","[","]","\\"};
	std::string l3[11]={"a","s","d","f","g","h","j","k","l",";","'"};
	std::string l4[10]={"z","x","c","v","b","n","m",",",".","/"};
	if(s.compare("=")==0) return "=";
	else if(s.compare("\\")==0) return "\\";
	else if(s.compare("'")==0) return "'";
	else if(s.compare("/")==0) return "/";
	for(int xd=0;xd<13;xd++){
		if(s.compare(l1[xd])==0) return l1[xd+1];
		if(s.compare(l2[xd])==0) return l2[xd+1];
		if(xd<=10){
			if(s.compare(l3[xd])==0) return l3[xd+1];
			if(xd<=9){
				if(s.compare(l4[xd])==0) return l4[xd+1];
			}
		}
	}
}

int main(){
	std::string wrd,newWrd="";
	getline(std::cin,wrd);
	for(int n=0;n<wrd.length();n++){
		newWrd=newWrd+change(wrd.substr(n,1));
	}
	std::cout<<newWrd;
	return 0;
}
