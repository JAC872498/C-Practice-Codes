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
    int cases,num,tries=0;
    std::cin>>cases;
    for(int x=0;x<cases;x++){
        tries=0;
        std::cin>>num;
        while(num!=reverse(num)||std::to_string(num).length()){
            tries+=1;
            num+=reverse(num);
        }
        std::cout<<tries<<" "<<num<<"\n";
    }
    //std::cout<<str.substr(0,str.length()/2)<<"\n";
    //std::cout<<str.substr(str.length()/2,str.length());
    return 0;
}
