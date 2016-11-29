#include <iostream>
#include <string> 
using namespace std;

int binary(int x){
	int	bin=0;
	string wrd="";
	string newWrd="";
	for(int n=0;n<x;n++){//Creating the number
		bin++;
		wrd=to_string(bin);
		for(int a=0;a<wrd.length();a++){//Going through each number 
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
					bin=;
				}else{//2 in the middle
					wrd=;
					bin=;
				}
			}	
		}
	}
	return bin;
}

int main(){
	return 0;
}
