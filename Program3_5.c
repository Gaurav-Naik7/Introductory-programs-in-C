// Program to accept character from user and check whether that character is vowel or not

#include<stdio.h>
#include <stdbool.h>

bool ChkVowel(char CValue)
{
	if(CValue=='a'|| CValue=='e'|| CValue=='i'|| CValue=='o'|| CValue=='u'|| CValue=='A'|| CValue=='E'|| CValue=='I'|| CValue=='O'|| CValue=='U')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue='\0';
	bool bRet=false;
	
	printf("Enter Character\n");
	
	scanf("%c",&cValue);
	
	bRet=ChkVowel(cValue);
	
	if(bRet==true)
	{
		printf("It is a vovel");
	}
	else
	{
		printf("It is not a Vowel");
	}
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input:     E
// Output:    It is vovel
//
// Input:     d
// Output:    It is not a vowel
//
///////////////////////////////////////////////////////