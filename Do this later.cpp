/**/

#include <iostream>
#include <string>

int main(){
	int cases,n,i,vote;
	std::cin>>cases>>n;
	std::string names[n];
	int votes[n];
	for(int x=0;x<n;x++){
		getline(std::cin, names[x]);
	}
	while(true){
		std::cin>>vote;
		getline(std::cin, vote);
		if(vote==0){
			break;
		}
		i++;
		if(i==n){
			i=0;
		}
		votes[i]=n-i;
	}
	return 0;
}
