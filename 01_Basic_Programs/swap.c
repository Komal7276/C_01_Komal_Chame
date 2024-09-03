//write a program of swapping with 2 and 3 variable using function,take input from user.

#include<stdio.h>
#include<conio.h>

void swap2(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nFirst number =%d\n",a);
    printf("Second number =%d",b);
}

void swap3(int a,int b)
{
    int c;

    c=a;
    a=b;
    b=c;

    printf("\nFirst Number =%d",a);
    printf("\nSecond Number =%d",b);

}


int main()
{
    int ivalue1,ivalue2;

    printf("Swap with 2\n\n");

    printf("Enter First Number\n");
    scanf("%d",&ivalue1);

    printf("\nEnter Second Number\n");
    scanf("%d",&ivalue2);

    swap2(ivalue1,ivalue2);

    int ino1,ino2;

    printf("\n\nSwap with 3\n\n");

    printf("Enter First Number\n");
    scanf("%d",&ino1);

    printf("\nEnter Second Number\n");
    scanf("%d",&ino2);

    swap3(ino1,ino2);


    return 0;
}