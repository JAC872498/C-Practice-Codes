#include <iostream>

int power(int number){
	int z=(2*number)+1;
	for(int x=(2*number)-3;x>1;x-=2){
		if(x==5) z+=4;
		for(int y=x;y>0;y--){ z+=y; }
	}
	return z;
}

int main(){
	int number=4;
	std::cout<<power(number);
	return 0;
}
