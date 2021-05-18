#include <stdio.h>
int main (int argc, char *argv[]) {
    char name1[10]; //each subject marks is less than 10
	char name2[10];
	
	strcpy(name1,argv[1]);
	strcypy(name2,argv[2]);
	
	puts(name1);
	printf(name2);
    
}
