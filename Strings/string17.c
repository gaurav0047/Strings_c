
//Program to accept multiline string from the end user 

#include<stdio.h>

int main(void)
{	
 char str[100];  
 printf("Enter Multiline address till # ::");
 scanf("%[^#]s", str);
 printf("\n\n ADDRESS:: \n %s", str);
 return 0;
}
