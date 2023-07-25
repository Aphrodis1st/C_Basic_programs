#include <stdio.h>

int main() {
	int pin = 0;
	int trials = 0;

		printf("WELCOME!:\n");
		printf("Enter your PIN: ");
		scanf("%d", &pin);

		trials++;

	while (pin != 1234 && trials < 3) {
		printf("Access Denied! \nTry Again: ");
		scanf("%d", &pin);
		trials++;
		}

	if (pin == 1234) {
		printf("PIN accepted!\n");
		printf("ACCESS GRANTED\n");
		}
	else if(trials == 3){
		printf("Out of trials.\nPlease call Administrator\n");
		}
	return 0;
	}
