/*
Write a program of Array using functio and check the array elements even or odd,
take array elements from user.
*/

#include<stdio.h>
#include<conio.h>

int CheckEvenOdd(int arr[],int size)
{
    int i;
    int EvenCount=0,OddCount=0;

    printf("\nEven Numbers :\n");

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d \n",arr[i]);
            EvenCount++;
        }
    }

    printf("Number of Even Element =%d\n",EvenCount);


    printf("\nOdd Numbers :\n");

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==1)
        {
            printf("%d \n",arr[i]);
            OddCount++;
        }
    }

    printf("Number of Odd Element =%d\n",OddCount);

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

    CheckEvenOdd(arr,n);

    return 0;
}