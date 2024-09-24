/*
Write a program of pointer with array using function to print the reverse array list ,
take input from user.
*/

#include<stdio.h>

int reverse(int arr[],int size)
{
    int *ptr[size];
    int i;

    printf("\nIndex \t\tElement \tAddress\n\n");

    for(i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("%d\t\t%d\t\t%lu\n",i,*ptr[i],ptr[i]);        
    }

    printf("\nReverse array elements \n");

    printf("\nElements :");

    for(i=(size-1);i>=0;i--)
    {
        printf("%d\t",arr[i]);
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

    reverse(a,n);

    return 0;
}