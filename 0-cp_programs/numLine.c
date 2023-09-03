#include <stdio.h>


int main(void)
{
	int num;

	printf("Enter a digit: ");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("%d is negative number\n", num);
	}

	else
	{
		printf("%d is positive number\n", num);
	}

	return (0);
}
