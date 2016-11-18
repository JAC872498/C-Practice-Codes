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
  if(oldTemp=="C"||oldTemp=="c"){//If the original temp is in celsius
    if(newTemp=="K"||newTemp=="k"){//Celsius --> Kelvin
      cout<<deg+273.15;
    }else if(newTemp=="F"||newTemp=="f"){//Celsius --> Fahrenheit
      cout<<deg*1.8+32;
    }else{//Neither of the two
      cout<<"Only enter F or K";
    }
  }else if(oldTemp=="F"||oldTemp=="f"){//If the original temp is if fahrenheit
    if(newTemp=="K"||newTemp=="k"){//Fahrenheit --> Kelvin
      cout<<(deg+459.67)*(5/9);
    }else if(newTemp=="C"||newTemp=="c"){//Fahrenheit --> Celsius
      cout<<(deg-32)/1.8;
    }else{//Neither of the two
      cout<<"Only enter C or K";
    }
  }else if(oldTemp=="K"||oldTemp=="k"){//If the original temp is in kelvin
    if(newTemp=="C"||newTemp=="c"){//Kelvin --> Celsius
      cout<<deg-273.15;
    }else if(newTemp=="F"||newTemp=="f"){//Kelvin --> Fahrenheit
      cout<<deg*1.8-459.67;
    }else{//Neither of the two
      cout<<"Only enter C or F";
    }
  }else{
    cout<<"Only enter C, F, or K";
  }
}
