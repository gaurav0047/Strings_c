#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//strcmpi()
int main()
{	                              
  char s1[10] = "xYZCut";          //xyzcut   XYZCUT
  char s2[10] = "XyZfuT";          //xyzaut   XYZAUT
  
  int ans = strcmpi(s1,s2);   //string comparision IGNORING the case 
  
  printf("Returned value = %d \n", ans);
  
  return 0;

} 