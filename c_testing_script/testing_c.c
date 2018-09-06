/*
 * testing_c.c
 *
 *  Created on: Sep 6, 2018
 *      Author: mcdaale
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int max_num = 0;

	puts("Please enter a max number for a range.");
	scanf(%d, &max_num);

	puts("Guess a number between 0 and %d", max_num);

	return 0;
}

int get_rand_num(int max)
{
	int random;

	random = rand() % max;
	return random;
}

