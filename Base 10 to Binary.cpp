/**/

#include <iostream>
#include <string> 
using namespace std;

int binary(int x){
	int	bin=0;
	string s="";
	for(int n=0;n<x;n++){
		bin++;
		s=to_string(bin);
		cout<<s[1];/*USE THIS*/
		if(bin%2==0 && bin%5!=0){
			bin=bin+8;
		}
	}
	return bin;
}

int main() {
	//cout<<binary(4);
	
	return 0;
}
