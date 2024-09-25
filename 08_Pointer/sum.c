/*
Write a program of pointer using function to perform sum,
take input from user. 
*/

#include<stdio.h>

int sum(int n)
{
    int a,b,c,d,sum;
    
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    int *ptr4=&d; 
    int *ptr5=&sum;

    *ptr1=n%10;
    n=n/10;

    *ptr2=n%10;
    n=n/10;

    *ptr3=n%10;
    n=n/10;

    *ptr4=n%10;
    n=n/10;

    *ptr5=(*ptr1)+(*ptr2)+(*ptr3)+(*ptr4);
    printf("Sum =%d",*ptr5);

    return 0;

}

int main()
{
    int n;

    printf("Enter 4 digit number :");
    scanf("%d",&n);

    sum(n);

    return 0;
}