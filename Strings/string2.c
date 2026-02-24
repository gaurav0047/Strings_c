#include<stdio.h>
#include<string.h>

int main(void)
{
    // Declare character array with size 15 and initialize with "Gaurav"
    // Remaining elements are automatically filled with '\0'
	char name[15] = "Gaurav";

    // sizeof(name) returns total allocated array size, not string length
	printf("Space req. = %d bytes \n", sizeof(name));

    // %s prints characters until null terminator '\0' is found
	printf("Name = %s \n", name);
	
    // strlen() counts characters until '\0', excluding it
 	int len = strlen(name); 

    // Print actual string length
 	printf("Length of %s is %d \n", name, len);
 	
	return 0;
}
