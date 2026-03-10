#include<stdio.h>
#include<string.h>
 
int main(void)
{	
 char str[10]; 
 printf("Enter String ::");
 fgets(str,10,stdin);
 //printf("\nLength = %d \n", strlen(str)); 
 printf("\nLength = %d \n", strlen(str)-1); 
 
 return 0;
}

/*FootNote :

The fgets() function in C stores the newline character (\n) in the destination buffer
if it is encountered during input and there is enough space in the buffer. 

	
Key Details:
	
Behavior: fgets() reads characters from the specified stream until a newline character (\n), an end-of-file (EOF) is reached, 
or the specified maximum number of characters (minus one for the null terminator) has been read.

Inclusion: Unlike the deprecated gets() function, which discards the newline character, 
           fgets() includes the \n character in the stored string.

Null-Termination: It always appends a null character (\0) after the last character read into the buffer. 
 
Example ::
If a user types "hello" and presses Enter, 
the buffer will contain the following characters: {'h', 'e', 'l', 'l', 'o', '\n', '\0'}.

*/
