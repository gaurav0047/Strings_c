/*
C Program to print the summary of total digits, white spaces and special symbols present in a string 
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{	
 	char s[20];
 	int scnt=0,pcnt=0,dcnt=0, i;
 	
 	printf("Enter String ::");
 	fgets(s, 20, stdin);
 	for(i=0;s[i]!='\0';++i)
 	{
 		if(isdigit(s[i]))
 				++dcnt;
 		else if(ispunct(s[i]))
 				++pcnt;
 		else if(isspace(s[i]))
 				++scnt;
	}
	
	printf("\n\nString Summary ::\n");
	printf("Total Digits : %d \n", dcnt);
	printf("Total Special Chars : %d \n", pcnt);
	printf("Total Spaces : %d \n", scnt);
 	printf("Total Characters : %d \n", i);
 
 	return 0;
}
