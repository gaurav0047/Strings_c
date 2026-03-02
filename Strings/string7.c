#include <stdio.h>
#include <string.h>

// Program to print the string without using %s as a format specifier

int main(void)
{
  char name[20];
  printf("Enter Name ::");
  scanf("%s", name);
  printf("\nGiven String is :");

  int i = 0;
  // while(name[i] != '\0')
  while (name[i])
  {
   //printf("%c\n", name[i]);
    putchar(name[i]);

    ++i;
  }

  return 0;
}