/* This is a comment*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

#define CONSTANT_NUM 10

int sum(int a, int b);

int main(int argc, char **argv) {
	const int CONSTANT_NUM_IN = 5;
	int a = 3, b = 2;

	puts("hello");
	printf("world \n");

	printf("The size of an int is: %d \n", sizeof(int));
	printf("The size of a float is: %d \n", sizeof(float));

	printf("the sum of a + b = %d \n", sum(a, b));
	printf("This is a const defined by preprocessor: %d \n", CONSTANT_NUM);
	printf("This is a const defined with const: %d \n", CONSTANT_NUM_IN);
	return 0;
}
/*vim coment*/
int sum(int a, int b){
	return a + b;
}
