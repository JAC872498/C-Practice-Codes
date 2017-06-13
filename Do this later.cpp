/**/

#include <iostream>
#include <string>

int main(){
	int cases,n,i=0,vote,top=0,topX;
	std::cin>>cases>>n;
	std::string names[n];
	int votes[n];
	for(int x=0;x<n;x++){
		std::cin>>names[x];
	}
	while(vote!=0){
		/*std::cin>>vote;
		i++;
		if(i==n){
			i=0;
		}
		votes[i]=n-vote;*/
		for(int i=0;i<=n;i++){
			std::cin>>vote;
			votes[i]=n-vote+1;
			if(vote==0){
				break;
			}
		}
	}
	for(int x=0;x<n;x++){
		std::cout<<votes[x]<<"\n";
		if(votes[x]>top){
			top=votes[x];
			topX=x;
		}
	}
	std::cout<<names[topX];
	return 0;
}
