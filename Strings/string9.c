#include<stdio.h>
#include<string.h>

//Program to print reverse of a given string 

int main(void)
{
	char name[20];
	int i, len;
	printf("Enter Name ::");
	scanf("%s", name);
	printf("Original String : %s \n", name);
	
	len = strlen(name);
	
	printf("Reverse of the string is :");
	
	for(i=len-1; i>=0; --i)
		printf("%c", name[i]);
	
	return 0;
}