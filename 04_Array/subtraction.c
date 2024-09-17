/*
Write a program of Array using function to perfrom the Subtraction of all the array elements,
take array list from user.
*/

#include<stdio.h>
#include<conio.h>

int Subtraction(int arr[],int size)
{
    int i,sub=0;

    for(i=0;i<size;i++)
    {
        sub=sub-arr[i];
    }

    printf("Subtraction =%d",sub);

    return 0;
}

int main()
{
    int n;
    printf("Enter a number that indicates how many numbers you want\n");
    scanf("%d",&n);

    int arr[n],i;
    printf("Enter Array Elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    Subtraction(arr,n);

    return 0;
}