/*
Write a program of Array using function to Reverse the Array ,
take the array elements from user.
*/

#include<stdio.h>
#include<conio.h>

int Reverse(int arr[],int size)
{
    int i;
    int Array[size];

    for(i=0;i<size;i++)
    {
        Array[i]=arr[size-i-1];
    }

    printf("Reverse Array :\n");

    for(i=0;i<size;i++)
    {
        printf("%d\n",Array[i]);
    }

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

    Reverse(arr,n);

    return 0;
}