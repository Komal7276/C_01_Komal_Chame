/*
Write a program of Array using function to find the Maximum Number in the array list,
take array list from user.
*/

#include<stdio.h>
#include<conio.h>

int Maximum(int arr[],int size)
{
    int i,max=arr[0];

    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    printf("Maximum Number =%d",max);

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

    Maximum(arr,n);

    return 0;
    
}