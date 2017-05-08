/**/

#include <iostream>

int main(){
    int total,length;
    while(true){
        std::cin>>total;
        if(!std::cin){break;}
        std::cout<<total<<"\n";
        length++;
    }
    std::cout<<length;
    return 0;
}
