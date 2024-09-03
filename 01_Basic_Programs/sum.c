//write a program of sum,by using function,take input from user.

#include<stdio.h>
#include<conio.h>

int sum(int n)
{
    int a,b,c,d,e,f,g;
    int sum;

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

    f=n%10;
    n=n/10;

    g=n%10;
    n=n/10;

    sum=a+b+c+d+e+f+g;

    return sum;

}

int main()
{
    int ivalue;
    int total;

    printf("Enter 7 digit number\n");
    scanf("%d",&ivalue);

    total=sum(ivalue);
    printf("\nSum of Numbers =%d",total);

    return 0;
}