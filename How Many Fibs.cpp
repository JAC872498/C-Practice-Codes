/*pg157 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
given two numbers, a and b, calculate how many fibonacci numbers are between them*/

#include <iostream>

int fibs(int num){
	if(num<=1) return(1);
	return(fibs(num-2)+fibs(num-1));
}

int main(){
	int a=1,b=1,n=0,ways=0;
	std::cin>>a>>b;
	while(a!=0||b!=0){
		while(fibs(n)<=b){
			if(fibs(n)>=a) ways+=1;
			n+=1;
		}
		std::cout<<ways<<"\n";
		std::cin>>a>>b;
		ways=0,n=0100;
	}
}
