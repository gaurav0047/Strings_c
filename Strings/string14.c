#include<stdio.h>
int main(void)
{	
 char str[10];  
 printf("Enter string ::");
 scanf("%5s", str); //Accepts only FIVE characters from the stream (stdin)
 printf("\nGiven String ::  %s", str);
 
 return 0;

}