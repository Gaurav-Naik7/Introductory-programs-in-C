// Program which takes input from user and returns product of factors

#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt=0;
	int iMult=1;
	
	for(iCnt=1;(iCnt<=(iNo/2));iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iMult=iMult*iCnt;
		}	
	}
	return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter a number : \n");
	scanf("%d",&iValue);
	
	iRet=MultFact(iValue);
	printf("Multiplication of factors is %d",iRet);
	
	return 0;
}