#include <iostream>

int name(int number){
	return (2*number)-1;	
}

int main(){
	int total=2;
	int river=2;
	for(int x=0;x<=river;x++){
		if(x==0||x==river){
			total+=1;
		}else if(x==1){
		    total+=(name(river));
		}else if(x==2){
		    total+=(((2*(river-1))-1)*river);//TODO: USE REOCURISON STUFF ON PAPER
		}else if(x==3){			 //TODO EXPLAINED: find out function using paper stuff and keep going down function untill you reach all 0.5
		    
		}else if(x==4){
		    
		}
	}
	std::cout<<total;
	return 0;
}
