#include<stdio.h>
#include<string.h>

int main(void)
{
    // Character array initialized manually with explicit null characters
    // Stored sequence: P U \0 N E \0
	char name[] = {'P','U','\0','N','E','\0'};
	
    // sizeof() returns total allocated bytes in array (6 here)
	printf("Space req. = %d bytes \n", sizeof(name));

    // %s prints characters until FIRST '\0'
    // So only "PU" will be printed
	printf("City Name = %s \n", name);

    // strlen() also stops counting at first '\0'
    // Length will be 2, not 6
 	int len = strlen(name); 

 	printf("Length of %s is %d \n", name, len);	

	return 0;
}
