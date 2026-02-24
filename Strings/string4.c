#include<stdio.h>
#include<string.h>

int main(void)
{
    // char name[] = {'P','U','N','E','\0'};
    
    // String literal contains an explicit null character in the middle.
    // Actual stored sequence: C h h a t r a \0 p a t i \0
    // Compiler also adds its own '\0' at the end automatically.
	char name[] = "Chhatra\0pati";
	
    // sizeof() returns total array size in bytes, including all characters
    // and both null terminators.
	printf("Space req. = %d bytes \n", sizeof(name));

    // %s stops printing at the FIRST '\0'
	printf("Name = %s \n", name);

    // strlen() counts characters only until first '\0'
 	int len = strlen(name); 

    // Length will be 7, not full array length
 	printf("Length of %s is %d \n", name, len);	

	return 0;
}
