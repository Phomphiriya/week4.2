#include<stdio.h>
int main()
{
	int x;
	printf("Enter your num :");
	scanf_s("%d", &x);
	if (x != 0)
	{
		if (x % 2 ==0)
		{
		printf("even number");
		}
	
		else
		{
			printf("odd number");
		}
	}
	return 0;
}