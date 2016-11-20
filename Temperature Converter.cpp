/*This takes either celsius, kelvin, fahrenheit and converts it into either of the other two choices.
The end result is rounded to the hundredths*/

#include <iostream>
using namespace std;

int main(){
  double lowDeg,highDeg,interval;
  string oldTemp,newTemp;
  cout<<"Enter the lowest temperature amount(just the number).\n";
  cin>>lowDeg;
  cout<<"Enter the highest temperature amount(also just the number).\n";
  cin>>highDeg;
  cout<<"Enter the interval.\n";
  cin>>interval;
  cout<<"Enter C, F, or K for the temperature you just put in.\n";
  cin>>oldTemp;
  cout<<"Enter C, F, or K for the temperature you want.\n";
  cin>>newTemp;
  if(oldTemp=="C"||oldTemp=="c"){//If the original temp is in celsius
  	  if(newTemp=="K"||newTemp=="k"){//Celsius --> Kelvin
	  for(double x=lowDeg+273.15;x<=highDeg+273.15;x+=interval){
		cout<<x<<"\n";
	  }
    }else if(newTemp=="F"||newTemp=="f"){//Celsius --> Fahrenheit
      for(double x=lowDeg*1.8+32;x<=highDeg*1.8+32;x+=interval){
		cout<<x<<"\n";
	  }
    }else{//Neither of the two
      cout<<"Only enter F or K";
    }
  }else if(oldTemp=="F"||oldTemp=="f"){//If the original temp is if fahrenheit
  	  if(newTemp=="K"||newTemp=="k"){//Fahrenheit --> Kelvin
  	  for(double x=(lowDeg+459.67)*0.556;x<=(highDeg+459.67)*0.556;x+=interval){
		cout<<x<<"\n";//I use .556 instead of 5/9 because the code refuses fractions
	  }
    }else if(newTemp=="C"||newTemp=="c"){//Fahrenheit --> Celsius
      for(double x=(lowDeg-32)/1.8;x<=(highDeg-32)/1.8;x+=interval){
		cout<<x<<"\n";
	  }
    }else{//Neither of the two
      cout<<"Only enter C or K";
    }
  }else if(oldTemp=="K"||oldTemp=="k"){//If the original temp is in kelvin
    if(newTemp=="C"||newTemp=="c"){//Kelvin --> Celsius
  	  for(double x=lowDeg-273.15;x<=highDeg-273.15;x+=interval){
		cout<<x<<"\n";
	  }
    }else if(newTemp=="F"||newTemp=="f"){//Kelvin --> Fahrenheit
      for(double x=lowDeg*1.8-459.67;x<=highDeg*1.8-459.67;x+=interval){
		cout<<x<<"\n";
	  }
    }else{//Neither of the two
      cout<<"Only enter C or F";
    }
  }else{
    cout<<"Only enter C, F, or K";
  }
}
