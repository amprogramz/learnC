/*
 * Alec McDaugale
 */
#include <stdio.h>

int number;
extern void write_externally();

int main(){
	number = 4;
	write_externally();
	return 0;
}


