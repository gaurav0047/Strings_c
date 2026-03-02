#include<stdio.h>
#include<string.h>
//Program to accept a single line input along with the white spaces from  the user
int main()
{
 char name[10];
 printf("Enter your FULL name::");
 
 fgets(name,20,stdin);
 
 printf("\nWelcome %s ", name);

 return 0;

}

 /*
 Syntax : fgets( storage_variable , max_character to be read(integer value) ,streamNAME)
 */
  