#include <iostream>
#include <cmath>

int power(int number){
	int z=(2*number)+1;
	for(int x=(2*number)-3;x>0;x--){ z+=x; }
	return z;
}

int main(){
    int river=2;
    std::cout<<power(river);
	return 0;
}
