/*pg 144 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
I have no idea if this is the correct way to do the problem
The description was terrible for this problem
Infact most of the rest of the problems in this section of the book suck*/

#include <iostream>
#include <cmath>//pow(1,2)

int main(){
	int n,k,tot=0;
	std::cin>>n>>k;
	int sequence[k];
	for(int x=0;x<k;x++){
		std::cin>>sequence[x];
		tot+=pow(sequence[x],n);
	}
	std::cout<<tot;
    return(0);
}
