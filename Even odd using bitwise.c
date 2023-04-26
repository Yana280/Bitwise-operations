#include<stdio.h>
int main()
{
 int c;
	printf("Enter a number: \n");
	scanf("%d",&c);
	if (c&1)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
 
  return 0;
}
