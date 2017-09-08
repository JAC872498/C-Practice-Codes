/*PG 140 in http://acm.cs.buap.mx/downloads/Programming_Challenges.pdf
Basicly takes a number and adds it reversed until the number is a palindrom, this works with every number except for 196*/

#include <iostream>
#include <string> 

int reverse(int n){
    int reversedNumber=0,r;
    while(n != 0){
        r=n%10;
        reversedNumber=reversedNumber*10+r;
        n/=10;
    }
    return reversedNumber;
}

int main(){
    int cases,num=0,tries=0;
    std::cout<<"Enter the amount of cases.\n";
    std::cin>>cases;
    for(int x=0;x<cases;x++){
        tries=0;
        num=0;
        std::cout<<"Enter your number.\n";
        std::cin>>num;
        while(num!=reverse(num)){
            tries+=1;
            num+=reverse(num);
        }
        std::cout<<tries<<" "<<num<<"\n";
    }
    return 0;
}
