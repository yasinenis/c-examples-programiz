// ex2 : Print an Integer
#include <stdio.h>
int main() {
	int number;

	printf("Enter an integer: ");

	//reads and stores input
	scanf_s("%d", &number);
	
	//displays output
	printf("You entered: %d", number);

	return 0;
}