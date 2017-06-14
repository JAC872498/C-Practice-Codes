/*pg.45 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf except the lowest candidate isn't removed*/

#include <iostream>
#include <string>

int main(){
	int n,c=0,vote,top=0,topX;
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
		   		voted[x]=0;
			}
		}
		if(top*2>=c){
			goto ending;
		}else{
			top=0;
			topX=0;
		}
	}
	ending:
	std::cout<<names[topX];
	return 0;
}
