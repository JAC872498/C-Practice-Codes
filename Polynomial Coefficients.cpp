/*pg 144 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
I have no idea if this is the correct way to do the problem
The description was preaty terrible for this problem*/

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
