/*
Write a program of Array using function to perform the Division of all the array elements,
take array list  from user.
*/

#include<stdio.h>
#include<conio.h>

int Division(int arr[],int size)
{
    int i;
    float div=1;

    for(i=0;i<size;i++)
    {
        div=div/arr[i];
    }

    printf("Division =%f",div);

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

    Division(arr,n);

    return 0;

}