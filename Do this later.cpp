/**/

#include <iostream>
#include <string>

int main(){
	int cases,n,c=0,vote,curr=1,ballots=0;
	std::cin>>cases>>n;
	std::string names[n];
	int votes[1000][n];
	int voted[n];
	for(int x=0;x<n;x++){
		std::cin>>names[x];
		voted[x]=0;
	}
	while(vote!=0){
		for(int i=0;i<n;i++){
			std::cin>>vote;
			if(vote==0){
				goto calc;
			}
			votes[c][i]=vote;
		}
		c++;//ayy
	}
	calc:
	for(int x=0;x<n;x++){
		std::cout<<names[x]<<" ";
	}std::cout<<"\n";
	for(int y=0;y<c;y++){
		for(int x=0;x<n;x++){
			std::cout<<votes[y][x]<<" ";
			if(votes[y][x]==curr){
				voted[x]++;
			}
		}
		std::cout<<"\n";
	}std::cout<<"\n";
	for(int x=0;x<n;x++){
		std::cout<<voted[x];
	}
	return 0;
}
