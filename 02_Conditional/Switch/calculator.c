/*
write a program of switch using function,
to perform calculator,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckOpr(char ch,int ino1,int ino2)
{
    int icnt;

    switch(ch)
    {
        case '+':
        icnt=ino1+ino2;
        printf("Addition =%d",icnt);
        break;

        case '-':
        icnt=ino1-ino2;
        printf("Subtraction=%d",icnt);
        break;

        case '*':
        icnt=ino1*ino2;
        printf("Multiplication=%d",icnt);
        break;

        case '/':
        icnt=ino1/ino2;
        printf("Division=%d",icnt);
        break;

        default :
        printf("Invalid Operator..");
        
    }
}

int main()
{
    char opr;
    int ivalue1,ivalue2;
    printf("Which Operation Do You Want To Perform\n");
    printf("Enter ...\n + : for Addition\n - : for Subtraction\n * : for Multiplication\n / : for Division\n");
   
    printf("Enter the operator \n");
    scanf("%c",&opr);

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);

    CheckOpr(opr,ivalue1,ivalue2);

    return 0;
}