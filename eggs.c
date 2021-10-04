#include <stdio.h>

int main()
{
	printf("The number of eggs for the day: ");
	
	double eggs;
	scanf("%lf", &eggs);

	double dozen = eggs / 12;
	
	printf("you have %lf dozen eggs\n", dozen);
	return 0;
}

