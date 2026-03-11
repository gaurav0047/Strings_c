#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//strncmp()
int main()
{	                               
  char s1[10] = "abcAut";          
  char s2[10] = "abcFefghi";       
  int ans = strncmp(s1,s2,4);    //Compares initial 4 characters of both the strings 
  
  printf("Returned value = %d \n", ans);
  
  return 0;

} 
