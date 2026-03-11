#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//strcpy() and strncpy() functions

int main()
{	
	char source[10] = "Rahul";
	char dest[10];
	
	//strcpy(dest,source);
	strncpy(dest,source,3);  
	// strncpy(destination_string, source_string, no_of_chars_to_be_copied);
	
	printf("Source = %s  and Destination = %s \n", source, dest);
	
  return 0;

} 