#include <iostream>

int power(int number){
	int z=1;
	for(int x=1;x<=(2*number)-1;x++){ z+=x; }
	return z;
}

int main(){
    int river=3;
    std::cout<<power(river);
	return 0;
}
