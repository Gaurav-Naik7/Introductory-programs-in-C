//Program which accepts one number from user and prints that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
	int i=0;
	
	if(iNo<=0)
	{
		return;
	}
	
	for(i=1;i<=iNo;i++)
	{
		printf("%d ",(2*i));
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	return 0;
}

///////////////////////////////////////////////////////
//
// Input:     7
// Output:    2 4 6 8 10 12 14
//
///////////////////////////////////////////////////////