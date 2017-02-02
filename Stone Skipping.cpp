//a river is x meters wide, 2x+1 rocks are placed in a straight line, each 0.5 meters across. How many possible ways could someone cross the
//stream taking either 0.5 meter jumps of 1 meter jumps
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
