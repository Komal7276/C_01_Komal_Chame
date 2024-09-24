/*
Write a program of pointer with array using function to print the numbers ,
take input from user.
*/

#include<stdio.h>

int number(int arr[],int size)
{
    int *ptr[size];
    int i;

    printf("\nIndex \t\tElement \tAddress\n\n");

    for(i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("%d\t\t%d\t\t%lu\n",i,*ptr[i],ptr[i]);        
    }
}

int main()
{
    int n;

    printf("Enter a number that indicates how many numbers you want :");
    scanf("%d",&n);

    int a[n],i;

    printf("Enter Array Elements \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    number(a,n);

    return 0;
}