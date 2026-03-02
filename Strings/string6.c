#include<stdio.h>
#include<string.h>   

// Program to accept user name and greet the user

int main(void)
{
    char name[20];   

    printf("Enter Name ::");   
    scanf("%s", name);         

    // display greeting message with entered name
    printf("\nWelcome to RSCOE, Mr./Ms. %s", name);

    return 0;   
}