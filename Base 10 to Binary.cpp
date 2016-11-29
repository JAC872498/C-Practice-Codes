#include <iostream>
#include <string> 
using namespace std;

int binary(int x){
	int	bin=0;
	string wrd="";//bin in a string
	string newWrd="";//wrd turned into a binary string
	for(int z=1;z<=x;z++){//Creating all binary numbers up to the entered number
		bin++;
		wrd=to_string(bin);//Turning bin into a string
		for(int a=0;a<wrd.length();a++){//Going through each number of bin
			if((wrd[a]-'0')==2){//If any number is a 2
				//Turn the 2 at s[a] into a 10
				if(a==0){//2 at the very front
					for(int str=1;str<wrd.length();str++){
						newWrd[str-1]=wrd[str];
					}
					newWrd="10"+newWrd;
					bin=stoi(newWrd);
				}else if(a==wrd.length()-1){//2 at the very back
					for(int str=0;str<wrd.length()-1;str++){
						newWrd[str]=wrd[str];
					}
					newWrd=newWrd="0";
					newWrd[newWrd.length()-2]=((newWrd[newWrd.length()-2]-'0')+1);
					bin=stoi(newWrd);
				}else{//2 in the middle
					for(int str1=0;str1<a;str1++){
						newWrd[str1]=wrd[str1];
					}
					newWrd[a-1]++;
					newWrd[a]='0';
					for(int str2=a+1;str2<wrd.length();str2++){
						newWrd[str2]=wrd[str2];
					}
					bin=stoi(newWrd);
				}
			}	
		}
		cout<<z<<": "<<bin<<"\n";
	}
	return bin;
}

int main(){
	binary(10);
	return 0;
}
