// Program to accept number from user and print even factors of that number

#include<stdio.h>

void PrintEvenFactors(int iNo)
{
	int i=0;
	
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	
	for(i=1;i<iNo;i++)
	{
		if((iNo%i==0)&&
		   (i%2==0)
			)
		{
			printf("%d ",i);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	PrintEvenFactors(iValue);
	return 0;
}

///////////////////////////////////////////////////////
//
// Input:     36
// Output:    2 4 6 12 18
//
///////////////////////////////////////////////////////