// ex4 : Multiply Two Floating - Point Numbers
#include <stdio.h>
int main() {
	double a, b, product;
	printf("Enter two numbers: ");
	scanf_s("%lf %lf", &a, &b);

	// Calculating product
	product = a * b;

	// %.2lf displays number up to 2 decimal point
	printf("Product = %.2lf", product);

	return 0;
}