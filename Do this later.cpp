/**/

#include <iostream>
#include <string>

int main(){
	int cases,n,i=0,vote=1;
	std::cin>>cases>>n;
	std::string names[n];
	int votes[n];
	for(int x=0;x<n;x++){
		std::cin>>names[x];
		//getline(std::cin, names[x]);
	}
	while(vote!=0){
		/*std::cin>>vote;
		i++;
		if(i==n){
			i=0;
		}
		votes[i]=n-vote;*/
		for(int i=0;i<n;i++){
			std::cin>>vote;
			votes[i]=n-votel
		}
	}
	for(int x=0;x<n;x++){
		std::cout<<votes[x]<<"\n";
	}
	return 0;
}
