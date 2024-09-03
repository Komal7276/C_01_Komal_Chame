//write a program to reverse any 5 digit number,take input from user.using function.

#include<stdio.h>
#include<conio.h>

int reverse(int n)
{
    int a,b,c,d,e;
    int rev;

    a=n%10;
    n=n/10;

    b=n%10;
    n=n/10;

    c=n%10;
    n=n/10;

    d=n%10;
    n=n/10;

    e=n%10;
    n=n/10;

    rev=(a*10000)+(b*1000)+(c*100)+(d*10)+(e*1);

    return rev;
}

int main()
{
    int ivalue;
    int rev_num;

    printf("Enter 5 digit number to reverse it\n");
    scanf("%d",&ivalue);

    rev_num=reverse(ivalue);
    printf("\nReverse Number =%d",rev_num);

    return 0;
}