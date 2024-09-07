/*
write a program of if-else ladder using function ,
create a calculator ,take input from user.
*/

#include<stdio.h>
#include<conio.h>

void operator(char ch,int ino1,int ino2)
{
    int icnt;
    if(ch=='+')
    {
        icnt=ino1+ino2;
        printf("Addition =%d",icnt);
    }

    else if(ch=='-')
    {
        icnt=ino1-ino2;
        printf("Subtraction =%d",icnt);
    }

    else if(ch=='*')
    {
        icnt=ino1*ino2;
        printf("Multiplication =%d",icnt);
    }

    else if(ch=='/')
    {
        icnt=ino1/ino2;
        printf("Division =%d",icnt);
    }

    else
    {
        printf("Invalid Operator...");
    }
    
}

int main()
{
    int ivalue1,ivalue2;
    char c;

    printf("Enter arithmatic operator\n");
    scanf("%c",&c);

    printf("Enter first number\n");
    scanf("%d",&ivalue1);

    printf("Enter second number\n");
    scanf("%d",&ivalue2);

    operator(c,ivalue1,ivalue2);

    return 0;
}