/*Program to print length of the given string without using 
built-in string function strlen() 
*/

#include<stdio.h>
int main(void)
{
	char name[20];
	printf("Enter Name ::");
	scanf("%s", name);
	int i=0;
	while(name[i])
	{
			++i;
	}
	
	printf("\nLength of %s is %d \n", name, i);
	
	return 0;
}