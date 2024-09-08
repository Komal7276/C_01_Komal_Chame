/*
write a program of nested if-else of even/odd using function,
take input from user.
*/        

#include<stdio.h>
#include<conio.h>

void CheckNum(int ino)
{
    if(ino>0)
	{
		if(ino%2==0)
		{
			printf("This is Even & positive Number");
		}

		else
		{
			printf("This is Odd & positive Number");
		}
	}

	else
	{
		if(ino%2==0)
		{
			printf("This is Even and Negative Number");
		}

		else
		{
			printf("This is Odd and Negative Number ");
		}
	}
}

int main()
{
    int ivalue;
    
    printf("Enter a Number\n");
    scanf("%d",&ivalue);

    CheckNum(ivalue);

    return 0;
}