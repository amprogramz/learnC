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
	int rand_num = 0;
	char in_storage[100];

	max_num = get_num("Please enter a max number for a range.");
	rand_num = get_rand_num(max_num);


	//printf("Guess a number between 0 and %d \n", max_num);
	while(1)
	{
			get_num(get_message_w_num("Guess a number between 0 and", max_num));
	}



	return 0;
}

int get_rand_num(int max)
{
	int random;

	random = rand() % max;
	return random;
}

char *get_message_w_num(char string[], int max_num)
{
	char max_num_string[100];
	sscanf((char)max_num, "%s", max_num_string);
	strcat(string, max_num_string);

	return string;
}

int get_num(char string[])
{
	int max_num = 0;
	char in_storage[100];

	puts(string);
	fgets(in_storage, sizeof(in_storage), stdin);
	sscanf(in_storage, "%d", &max_num);

	return max_num;
}




