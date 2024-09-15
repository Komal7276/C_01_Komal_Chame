/*
Write a program of Array using function to perform the Addition of all the array elements,
take array list from user.
*/

#include<stdio.h>
#include<conio.h>

int Addition(int arr[],int size)
{
    int i,sum=0;

    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    printf("Addition =%d",sum);

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

    Addition(arr,n);

    return 0;
}