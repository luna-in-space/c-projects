#include <stdio.h>
#include <math.h>
//magic
int main() //function
{ //this is the start of the function
	double radius; //this creates a float
	printf("please enter a radius "); 
	scanf("%lf",  &radius); //whatever the user types in the console will become the value of radius. %lf is short for long float, which is the datatype of double
	
	double area = M_PI * (radius * radius); //double is a floating point data type, meaning you can have decimals. M_PI is imported from math.h; it is just pi 

	printf("the area of a circle with %lf radius is %lf\n",radius, area ); //prints ur thing
	return 0; 
}
