// ex7 : Find the Size of Variables
#include <stdio.h>
int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;

	// size of evaluates the size of a variable
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes \n", sizeof(charType));

	return 0;
}