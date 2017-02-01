#include <iostream>

int main(){
	int total=2;
	int river=2;
	for(int x=0;x<=river;x++){
		if(x==0||x==river){
			total+=1;
		}else if(x==1){
		    total+=((2*river)-1);
		}else if(x==2){
		    total+=((river*river)-river);
		}else if(x==3){
		    
		}else if(x==4){
		    
		}
	}
	std::cout<<total;
	return 0;
}
