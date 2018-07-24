# learnC
This is a repository to learn c.
/* #include <stdio.h>
#include <string.h>

struct Book {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main( )
{
	struct Book book1;
	strcpy( book1.title, "C 101" );
	strcpy( book1.author, "Jim Henson" );
	strcpy(book1.subject, "Computer Sciences");
	book1.book_id = 1010;

	printf("Book %s by %s. \n Category: %s \n # : %d \n", book1.title, book1.author, book1.subject, book1.book_id);

	return 0;
  
  
  ////
  
  
  #include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<cstddef.h>

#define MOVIE_QUOTE "neo the chosen one."

int main() {

	printf("hello world!\n");
	printf("line 2 \n");

	int number = 1;
	int *ptr;
	ptr = &number;

	printf("Number is %d and its memory is at %x. \n", *ptr, ptr);

	char *names[] = {
			"jum",
			"scrum",
			"dum"
	};

	int i = 0;
	for (i = 0; i < 3; i++){
		printf("Name %d is: %s \n", i, names[i]);
	}

	char *name = NULL;
	name = calloc(30, 1);
	if(name != NULL){
	strcpy(name, MOVIE_QUOTE);
	}
	printf("He is %s \n", name);
	printf("name mem address is %p \n", *name);
	free(name);
	name = NULL;

	char str1[20] = "this is the string ";
	char str2[20] = "and a 2nd string";
	char str3[20];
	strcpy(str3, str1);
	printf("the copied string is \"%s\"\n", str3);

	int result = strcmp(str1, str2);
	if(result == 0){
		printf("false, str1 and str2 are not the same.\n");
	}else{
		printf("true, str1 and str2 are equal.\n");
	}

	strcat(str1, str2);
	printf("the concatenation produces \"%s\"\n", str1);

	int length = strlen(str1);
	printf("The length of string 1 is: %d\n", length);
	return 0;
}

*/
