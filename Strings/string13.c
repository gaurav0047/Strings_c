/*
C Program to accept student details such as roll number , name and percentage and print them
in a tabular format */

#include <stdio.h>
#include<string.h>

int main(void)
{
  int n;
  printf("How many student records you want to add :: ");
  scanf("%d", &n);

  int roll[n];
  char name[n][50];
  float per[n];

  for (int i = 0; i < n; i++)
  {
    printf("\nEnter Roll No.::");
    scanf("%d", &roll[i]);

    // fflush(stdin); //Non-recommended way to flush the stream buffer

    while ((getchar()) != '\n')
      ; // Recommended way to flush the stream buffer

    printf("\nEnter Full Name ::");
    fgets(name[i], sizeof(name[i]), stdin);
    name[i][strcspn(name[i], "\n")] = '\0'; 

    printf("\nEnter Score ::");
    scanf("%f", &per[i]);
  }

  printf("\n\nSUMMARY\n\n");
  printf("Roll  Name   Score\n");
  printf("---------------------------\n");

  for (int i = 0; i < n; i++)
    printf("%d  %s   %.2f \n", roll[i], name[i], per[i]);

  return 0;
}