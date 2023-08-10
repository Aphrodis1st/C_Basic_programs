#include <stdio.h>


int main(void)

{

	int notbks;
	float dozen;

		printf("Input the number of notebooks: \n");
		scanf("%i", &notbks);

	dozen = (double) notbks / 12;

		printf("Dozens in your notebooks is: %f\n", dozen);

	return (0);
}
