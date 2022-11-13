// Program which accepts a number from user and displays whether the number is smaller or greater than 10

#include<stdio.h>

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("Smaller than 10");
	}
	else
	{
		printf("Greater than 10");
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}