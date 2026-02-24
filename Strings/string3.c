#include<stdio.h>
#include<string.h>

int main(void)
{
    // char name[11] = "Chhatrapati";   // ❌ Wrong: no space for '\0'
    // char name[11+1] = "Chhatrapati"; // ✔ Correct: 11 chars + 1 null terminator

    // Correct declaration: size 12 stores "Chhatrapati" + '\0'
	char name[12] = "Chhatrapati";

    // %s prints characters until null terminator is reached
	printf(" Name = %s \n", name);
  
	return 0;
}
