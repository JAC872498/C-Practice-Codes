/**/

#include <iostream>

int main(){
	int n=2,c=2;
	int f[n];
	f[0]=1;
	f[1]=2;
	for(int x=0;x<n;x++){
		std::cout<<x+1<<" "<<f[x]<<"\n";
		for(int y=0;y<f[x];y++){
			std::cout<<x+1;
			f[c]=x+1;
		}
	}
	return 0;
}
