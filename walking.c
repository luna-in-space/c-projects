#include <stdio.h>

int main()
{

	int walk;
	int yes;
	printf("do you want to walk? (0/1) ");
	scanf("%i", &yes);


	if (yes == 1)
	{
	printf("you walked\n");
	}
	else 
	{
	printf("incorrect\n");
	}
	return 0;
}
