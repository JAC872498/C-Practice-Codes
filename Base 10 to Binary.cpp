#include <iostream>
#include <string> 
using namespace std;

int binary(int x){
	int	bin=0;
	string wrd="";//bin in a string
	string newWrd="";//wrd turned into a binary string
	for(int bin=0;bin<x;bin++){//Creating all binary numbers up to the entered number
		wrd=to_string(bin);//Turning bin into a string
		for(int a=0;a<wrd.length();a++){//Going through each number of bin
			if((wrd[a]-'0')==2){//If any number is a 2
				//Turn the 2 at s[a] into a 10
				if(a==0){//2 at the very front
					for(int str=1;str<wrd.length();str++){
						newWrd[str-1]=wrd[str];
					}
					newWrd="10"+newWrd;
					bin=newWrd to int;
				}else if(a-1==s.length()){//2 at the very back
					for(int str=0;str<wrd.length()-1;str++){
						newWrd[str]=wrd[str];
					}
					newWrd=newWrd="0";
					newWrd[newWrd.length()-2]=((newWrd[newWrd.length()-2]-'0')+1) to string;
					bin=newWrd to int;
				}else{//2 in the middle
					wrd=;
					
					bin=newWrd to int;
				}
			}	
		}
	}
	return bin;
}

int main(){
	return 0;
}
