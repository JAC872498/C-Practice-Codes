/*https://www.cprogramming.com/challenges/pascal.html
TODO: fix the formating and spacing*/

#include <iostream>

int main(){
	int row;
	std::cin>>row;
	int rows[row][row];
	for(int n1=0;n1<row;n1++){
		for(int n2=row-1;n2>n1;n2--){
			rows[n1][n2]=0;
		}
		rows[n1][0]=1;//adding the 1 'border' with 0s outisde 
		rows[n1][n1]=1;
	}
	for(int n1=2;n1<row;n1++){
		for(int n2=1;n2<n1;n2++){
			rows[n1][n2]=rows[n1-1][n2]+rows[n1-1][n2-1];
		}//adding the important numbers inside the 1 'border'
		
	}
	for(int n1=0;n1<row*2-1;n1++){
		if(n1<row){
			for(int space=0;space<row-n1;space++){
				std::cout<<" ";
			}
			for(int n2=0;n2<row;n2++){
				if(rows[n1][n2]==0){
					goto endLine1;//cuts off a line once it's nothing but 0
				}else{//doing the 1st triangle
					std::cout<<rows[n1][n2]<<" ";
				}
			}
			endLine1:
			std::cout<<"\n";
		}else{
			for(int n2=0;n2<row;n2++){
				if(rows[(n1-row-row+2)*-1][n2]==0){
					goto endLine2;
				}else{//doing the 2nd reverse triangle
					std::cout<<rows[(n1-row-row+2)*-1][n2]<<" " ;
				}
			}
			endLine2:
			std::cout<<"\n";
		}
	}
	
}
