/*
*/

#include <iostream>
#include <sstream> 
#include <string>
#include <cmath>

int main(){
	std::string ones[]={""," one"," two"," three"," four"," five"," six"," seven"," eight"," nine"};
	std::string tens[]={""," ten"," twenty"," thirty"," fourty"," fifty"," sixty"," seventy"," eighty"," ninety"};
	std::string suffix[]={""," thousand"," million"," billion"," trillion"," quadrillion"};
	std::string wrd="";
	int num=0;
	std::ostringstream str1; 
	std::cin>>num;
	str1<<num;
	for(int n=0;n<str1.str().length();n+=3){
		wrd=ones[(int)(num/pow(10,n))%10]+wrd;
		wrd=tens[(int)(num/pow(10,n+1))%10]+wrd;
		if(ones[(int)(num/pow(10,n+2))%10]!="")
			wrd=ones[(int)(num/pow(10,n+2))%10]+" hundred"+wrd;
	}
	wrd.erase(0,1);
	std::cout<<wrd;
	return(0);
}