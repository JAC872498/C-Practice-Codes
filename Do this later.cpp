/**/

#include <iostream>
#include <string>

int main(){
	int n,c=0,vote,curr=1,top=0,topX;
	std::cin>>n;
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
	for(int curr=1;curr<=n;curr++){
		for(int y=0;y<c;y++){
			for(int x=0;x<n;x++){
				   	if(votes[y][x]==curr){
					voted[x]++;
				}
			}
		}
		for(int x=0;x<n;x++){
			   	if(voted[x]>top){
				top=voted[x];
			   	topX=x;
		   	}
		}
		if(top*2>=c){
			goto ending;
		}else{
			top=0;
			topx=0;
		}
	}
	ending:
	std::cout<<names[topX];
	return 0;
}
