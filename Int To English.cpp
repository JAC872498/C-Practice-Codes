/*
*/

#include <iostream>
#include <string>

int main(){
	std::string ones[]={"one","two","three","four","five","six","seven","eight","nine"};
	std::string tens[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	std::string suffix[]={"","thousand","million","billion","trillion","quadrillion"};
	std::string wrd="";
	int num=0;
	std::cin>>num;
	for(int n=(std::to_string(num)).length();n>=0;n-=3){
		
	}
	std::cout<<wrd;
	return(0);
}