// Program which accepts a number from user and displays that number of * using while loop

#include<stdio.h>

void Accept(int iNo)
{	
	while(iNo>0)
	{
		printf("*");
		iNo--;
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	Accept(iValue);
	return 0;
}