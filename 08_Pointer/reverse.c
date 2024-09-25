/*
Write a program of pointer using function to make revrese number,
take input from user. 
*/

#include<stdio.h>

int reverse(int n)
{
    int a,b,c,d,rev;
    
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&c;
    int *ptr4=&d; 
    int *ptr5=&rev;

    *ptr1=n%10;
    n=n/10;

    *ptr2=n%10;
    n=n/10;

    *ptr3=n%10;
    n=n/10;

    *ptr4=n%10;
    n=n/10;

    *ptr5=(*ptr1*1000)+(*ptr2*100)+(*ptr3*10)+(*ptr4*1);
    printf("Reverse No. =%d",*ptr5);

    return 0;

}

int main()
{
    int n;

    printf("Enter 4 digit number :");
    scanf("%d",&n);

    reverse(n);

    return 0;
}