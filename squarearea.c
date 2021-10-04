#include <stdio.h>

int main()

{
	double y;
	printf("please enter a height: ");
	scanf("%lf",  &y);

	double x; 
	printf("please enter a length: ");
	scanf("%lf",  &x);

	double area = (x * y);
	printf("the area of your square is %lf\n", area );

	return 0;

}
