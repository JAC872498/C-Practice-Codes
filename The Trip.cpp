/*Each trip consists of a line containing a positive integer n denoting the number of students on the trip.
This is followed by n lines of input, 
each containing the amount spent by a student in dollars and cents.
For each trip, output a line stating the total amount of money, in dollars and cents,
that must be exchanged to equalize the students’ costs.*/

#include <iostream>
#include <math.h>
#include <cmath>

int main(){
    int students, tot=0;
    float avr=0;
    std::cin>>students;
    float costs[students-1];
    for(int x=0;x<students;x++){
        std::cin>>costs[x];
        costs[x]=costs[x]*100;
        avr+=costs[x];
    }
    avr=floor((avr/(float)students)*100+0.5)/100;
    //std::cout<<avr<<"\n";
    for(int x=0;x<students;x++){
        tot+=std::abs(costs[x]-avr);
    }
    std::cout<<"$"<<(tot/(double)200);
    return 0;
}
