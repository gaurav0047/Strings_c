/*Array of Strings */  

#include<stdio.h>
int main(void)
{
	//char name[3][20] = {"ABC", "JSPM", "RSCOE"};
	int i, n;
	printf("How many strings you want to store ? ");
	scanf("%d", &n);
	
	char name[n][20]; //storing "n" strings ,  each with the length of 20 bytes 
		
	printf("\n\nEnter %d names \n",n);
	for(i=0;i<n;++i)
	{
		printf("\nEnter Name %d ::", i+1);
		scanf("%s", name[i]);
	}

	printf("\n:: NAMES :: \n");
	for(i=0;i<n;++i)
		printf("%s \n", name[i]);	
	
	return 0;
} 
