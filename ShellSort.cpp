/**/

#include <iostream>
#include <string> 

int reverse(int n){
    int reversedNumber=0,remainder;
    while(n != 0){
        remainder=n%10;
        reversedNumber=reversedNumber*10+remainder;
        n/=10;
    }
    return reversedNumber;
}

int main(){
    int starting=0,tries=0;
    std::cin>>starting;
    std::string str=std::to_string(starting);
    if(str.substr(0,str.length()/2)==str.substr(str.length()/2,str.length())){
        std::cout<<tries<<" "<<starting;
        return 0;
    }else{
        again:
        
    }
    //std::cout<<str.substr(0,str.length()/2)<<"\n";
    //std::cout<<str.substr(str.length()/2,str.length());
    return 0;
}
