/*This takes either celsius, kelvin, fahrenheit and converts it into either of the other two choices.
The end result is rounded to the hundredths*/

#include <iostream>
using namespace std;

int main(){
  double deg;
  string oldTemp,newTemp;
  cout<<"Enter the temperature amount(just the number).\n";
  cin>>deg;
  cout<<"Enter C, F, or K for the temperature you just put in.\n";
  cin>>oldTemp;
  cout<<"Enter C, F, or K for the temperature you want.\n";
  cin>>newTemp;
  if(oldTemp=="C"||oldTemp=="c"){//If the original temp is in celcius
    if(newTemp=="K"||newTemp=="k"){//Celcius --> Kelvin
      cout<<deg+273.15;
    }else if(newTemp=="F"||newTemp=="f"){//Celcius --> Fahrenheit
      cout<<"C to F";
    }else{//Neither of the two
      cout<<"C";
    }
  }else if(oldTemp=="F"||oldTemp=="f"){//If the original temp is if fahrenheit
    if(newTemp=="K"||newTemp=="k"){//Fahrenheit --> Kelvin
      cout<<"F to K";
    }else if(newTemp=="C"||newTemp=="c"){//Fahrenheit --> Celcius
      cout<<"F to C";
    }else{//Neither of the two
      cout<<"F";
    }
  }else if(oldTemp=="K"||oldTemp=="k"){//If the original temp is in kelvin
    if(newTemp=="C"||newTemp=="c"){//Kelvin --> Celcius
      cout<<deg-273.15;
    }else if(newTemp=="F"||newTemp=="f"){//Kelvin --> Fahrenheit
      cout<<"K to F";
    }else{//Neither of the two
      cout<<"K";
    }
  }
}
