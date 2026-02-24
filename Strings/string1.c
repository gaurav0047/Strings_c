#include<stdio.h>
int main(void)
{
	//char name[10]; 
	 
	char name[10] = {'P','U','N','E','\0'};
	printf("Space req. = %d bytes \n", sizeof(name));
	printf("City Name = %s \n", name);
 	
	return 0;
}