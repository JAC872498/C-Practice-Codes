/*Most of you are framiliar with the pascal triangle, the right tirange made of asterisk(*) that gets 1 bigger every row down.
I decided to amp it up by making it an isosceles triangle(getting mathmatical in here).*/

#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter your number.\n";
	cin>>num;//The size of the pascal triange
	cout<<num<<":\n";
	for(int x=0;x<num;x++){
		for(int x2=num-(x+1);x2>0;x2--){//Determining how large the space needs to be
			cout<<" ";
		}
		for(int x1=1;x1<(x+1)*2;x1++){//Having the actual triangle part
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}