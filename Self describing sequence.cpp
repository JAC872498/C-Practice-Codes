/**/

#include <iostream>

int main(){
	int n=2,c=0;
	int f[n];
	f[0]=1;
	f[1]=2;
	for(int x=0;x<n;x++){
		std::cout<<"n:"<<x+1<<" "<<"f(n):"<<f[x]<<"\n";
		for(int y=0;y<f[x];y++){
			f[c]=x+1;
			c+=1;
		}
	}
	return 0;
}
