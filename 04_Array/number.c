/*
Write a program of Array using function to print the Numbers,
take array elements from user.
*/

#include<stdio.h>
#include<conio.h>

int Number(int arr[],int size)
{
    int i;
    printf("Elements :\n");

    for(i=0;i<size;i++)
    {
        printf("%d=[%d]\n",i,arr[i]);
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

    Number(arr,n);

    return 0;
}