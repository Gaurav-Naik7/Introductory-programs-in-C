//Program to accept a number from user and return the difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0;
	int iSumF=0;
	int iSumNf=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSumF=iSumF+iCnt;
		}
		else
		{
			iSumNf=iSumNf+iCnt;
		}
	}
	return (iSumF-iSumNf);
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	printf("%d",iRet);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input:     12
// Output:    -34
//
// Input:     10
// Output:    -29
//
///////////////////////////////////////////////////////