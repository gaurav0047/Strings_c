#include<stdio.h>
#include<string.h>

//Concept : SCAN SEARCH SET 
 
int main(void)
{	
	char str[20];
	printf("Enter a string ::");

//scanf("%[aeiou]s", str);//Accepts only a,e,i,o and/or u alphabetic characters. Sequence does not matter.   

//	scanf("%[^aeiou]s", str);//Accepts all the characters but EXCEPT a,e,i,o and/or u alphabetic characters.


	//Ranged Search Set
//	scanf("%[A-Z]s",str);//Accepts only A through Z characters. Not even spaces or other characters.

//	scanf("%[A-Za-z]s",str);//Accept all the alphabetic characters only.

scanf("%[A-Za-z ]s",str);//Accepts all alphabetic characters including spaces.

	printf("\nEntered String :  %s\n", str);
	
 	
 return 0;

}