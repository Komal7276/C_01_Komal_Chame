/*Create a function that takes two numbers as parameters and
returns their sum.*/

#include<stdio.h>
#include<conio.h>

int CalculateSum(int ino1,int ino2)
{
    int icnt;
    icnt = ino1+ino2;

    return icnt;
}


int main()
{
    int ivalue1,ivalue2;
    int result;

    printf("\nEnter first number :");
    scanf("%d",&ivalue1);

    printf("\nEnter second number :");
    scanf("%d",&ivalue2);

    result = CalculateSum(ivalue1,ivalue2);

    printf("\n*****  Sum  *****\n\n");
    printf("%d + %d = %d",ivalue1,ivalue2,result);
    

    return 0;
}