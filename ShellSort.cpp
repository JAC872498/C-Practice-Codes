/**/

#include <iostream>

int main(){
	int amount,curr=0;
	std::cin>>amount;
	std::string names[amount];
	std::string name;
	int scores[amount];
	for(int x=0;x<6;x++){
		std::cin>>name;
		for(int n=0;n<curr;n++){
			if(name==names[n]){
				scores[n]+=1;
				goto found;
			}
		}
		names[curr]=name;
		scores[curr]=0;
		curr+=1;
		found:
		std::cout<<"";
	}
	return 0;
}
