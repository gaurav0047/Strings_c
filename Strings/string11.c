
//Program to accept a single line input along with the white spaces from  the user

#include<stdio.h>
int main()
{
 char name[10];
 printf("Enter your FULL name::");
 
 gets(name); 
 
 //Here, name variable accepting an input string beyond its capacity and which is not recommended practice
 
 printf("\nWelcome %s to the impetus \n", name);

 return 0;

}

/*
FootNote :
gets() function stops reading the input from the standard input stream when it encounters with 
new line character.
*/