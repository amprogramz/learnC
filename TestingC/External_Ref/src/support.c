/*
 * Alec McDaugale
 *
 */
#include <stdio.h>

extern int number;

void write_externally(void){
	printf("The number from the other file is %d \n", number);
}


