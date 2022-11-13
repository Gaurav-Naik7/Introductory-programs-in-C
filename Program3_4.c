// Program to accept one character from user and convert case of that character

#include<stdio.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{
	if(islower(CValue))
	{
		printf("%c",toupper(CValue));
	}
	else if(isupper(CValue))
	{
		printf("%c",tolower(CValue));
	}
}


int main()
{
	char cValue='\0';
	
	printf("Enter Character\n");
	
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input:     a
// Output:    A
//
// Input:     D
// Output:    d
//
///////////////////////////////////////////////////////