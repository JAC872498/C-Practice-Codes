/*PG 72 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
Basicly a recreation of the program used in competetive coding competitions*/

#include <iostream>
int main(){
	int t[100];
	int s[100];
	for(int n=0;n<100;n++){
		t[n]=0;
		s[n]=0;
	}
	int name,solved,time;
	std::string grade;
	while(true){
		name=-1;
		std::cin>>name>>solved>>time>>grade;
		if(name==-1) goto end;
		if(grade=="I"){
			t[name-1]+=20;
		}else if(grade=="C"){
			t[name-1]+=time;
		   	s[name-1]+=1;
		}
	}
	end:
	for(int n=0;n<100;n++){
		if(t[n]!=0){
			std::cout<<n+1<<" "<<s[n]<<" "<<t[n]<<"\n";
		}
	}
}
