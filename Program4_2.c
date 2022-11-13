// Program to accept number from user and display its factors in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt=0;
	
	for(iCnt=(iNo/2);iCnt>0;iCnt--)
	{
		if(iNo%iCnt==0)
		{
			printf("%d ",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number : ");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input:     12
// Output:    6 4 3 2 1
//
// Input:     13
// Output:    1
//
///////////////////////////////////////////////////////