#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	
  char s1[10] = "abAfjjge";//"abcd";
  char s2[10] = "abCderf";  //"abcd";
  int ans = strcmp(s1,s2);
  
  printf("Returned value = %d \n", ans);
  
  return 0;

} 
/*
comparison of the string is always ASCII value based. Strings never been compared with their lengths.

s1 = "abcdef"
s2 = "abcdefnkflbnfklbn"

//strcmp()  returns value  0, IF both strings are same
            returns  value 1, IF s1>s2 and -1 IF s1<s2

*/
