#include<stdio.h>
#include<string.h>
//Program to accept a string from the user
int main()
{
 char name[20];
 printf("Enter your FULL name::");
 scanf("%s", name);//Rahul Sharad Dravid
 
 printf("\nWelcome %s to the impetus \n", name);

 return 0;

}

/*
FootNote :
scanf() function stops reading the input from the underlying input stream (stdin) as soon as it 
encounters with the WHITESPACE characters(exa. space, tab, new line)
*/