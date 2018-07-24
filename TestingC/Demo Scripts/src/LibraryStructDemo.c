#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book {
	char *bookName = calloc(1, 100);
	char *autor = calloc(1, 100);
	char *genra = calloc(1, 100);
	char *description = calloc(1, 100);
	int *upc = calloc(4, 100);

	void deallocate(char *a){
		free( a );
	}
	void deallocate(int *a){
			free( a );
	}
};

int main(){
	struct book book1;
	strcpy(book.bookName, "Tha Book");
	return 0;
}
