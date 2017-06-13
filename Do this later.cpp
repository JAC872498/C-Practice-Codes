/**/

#include <iostream>
#include <string>

int main(){
	int cases,n,i,vote=1;
	std::cin>>cases>>n;
	std::string names[n];
	int votes[n];
	for(int x=0;x<n;x++){
		std::cin>>names[x];
		//getline(std::cin, names[x]);
	}
	while(vote!=0){
		std::cin>>vote;
		i++;
		if(i==n){
			i=0;
		}
		votes[i]=n-i;
	}
	return 0;
}
