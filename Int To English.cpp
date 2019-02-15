/*
*/

#include <iostream>
#include <sstream> 
#include <string>
#include <cmath>

int main(){
	std::string ones[]={"one","two","three","four","five","six","seven","eight","nine"};
	std::string tens[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
	std::string suffix[]={"","thousand","million","billion","trillion","quadrillion"};
	std::string wrd="";
	int num=0;
	std::ostringstream str1; 
	std::cin>>num;
	str1<<num;
	for(int n=str1.str().length()-1;n>=0;n-=3){
		//TODO: Fix this, because why should it work the way the official c++ forums said it should work
		std::cout<<(num/std::pow(10,n))<<"\n";	
		wrd+=suffix[n/3];
	}
	std::cout<<wrd;
	return(0);
}
