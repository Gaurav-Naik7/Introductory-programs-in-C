// Program which accepts a number from user and displays whether the number is even or odd

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkEven(int iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	
	if(bRet==TRUE)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
	return 0;
}