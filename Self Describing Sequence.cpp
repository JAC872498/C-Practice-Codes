/*164*/

#include <iostream>

int main(){
	int n=1,c=0;
	std::cin>>n;
	int f[n];
	f[0]=1;
	f[1]=2;
	for(int x=0;x<n;x++){
		std::cout<<"n:"<<x+1<<" "<<"f(n):"<<f[x]<<"\n";
		for(int y=0;y<f[x];y++){
			//std::cout<<"c:"<<c<<"\n";
			f[c]=x+1;
			c+=1;
			if(c>n){
				std::cout<<x+1;
				return 0;
			}
		}
	}
	return 0;
}
