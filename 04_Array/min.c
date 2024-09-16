/*
Write a program of Array using function to find the Minimum Number in the array list,
take array list from user.
*/

#include<stdio.h>
#include<conio.h>

int Minimum(int arr[],int size)
{
    int i,min=arr[0];

    for(i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    printf("Minimum Number =%d",min);

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

    Minimum(arr,n);

    return 0;
    
}