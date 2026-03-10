/*
  Program to accept a single line of input using scanf() function.
  
 Program to make scanf() mimic the behavior of fgets() 
 (reading an entire line including spaces and the newline character) 
*/
#include<stdio.h>
int main(void)
{	
 char str[20];  
 printf("Enter full name ::");
 scanf("%[^\n]s", str);
 printf("\nWelcome %s", str);
 return 0;
}