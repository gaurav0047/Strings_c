#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[] = "abCErt";
    char s2[] = "aBcdTxete";
    //int diff = stricmp(s1,s2);
    int diff = strnicmp(s1,s2,4);
    
   printf("\nDifference = %d \n", diff);
	
	return 0;
}