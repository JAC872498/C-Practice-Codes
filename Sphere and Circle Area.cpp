//This is used to get a number from the user and calculate both the area of a cirlce and a sphere based on that.
#include <iostream>

using namespace std;

const double pi = 3.14159;

double circleRadius(double rad){
	//Calculating the area of a circle(pi*r²)
	return(pi*(rad*rad));
}

double sphereRadius(double rad){
	//Calculating the area of a sphere(4*pi*r²)
	return(4*pi*(rad*rad));
}

int main(){
	double radius;//Getting the number
	double anser;
	cout<<"Enter the radius\n";
	cin>>radius;
	if(radius>0){//Making sure the number is posotive;
		cout<<"A circle with this radius would have an area of "<<circleRadius(radius)<<"\n";
		cout<<"A sphere with this radius would have an area of "<<sphereRadius(radius);
	}else if(radius<0){
		cout<<"Enter in posotive numbers only.";
	}else if(radius==0){
		cout<<"The area for both shapes is 0.";
	}
	return 0;
}
