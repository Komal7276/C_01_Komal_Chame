/*
Write a program of pointer with array using function to print the maximum number in array list,
take input from user.
*/

#include<stdio.h>

int maximum(int arr[],int size)
{
    int *ptr[size];
    int i;
    int max=arr[0];
    
    printf("\nIndex \t\tElement \tAddress\n\n");

    for(i=0;i<size;i++)
    {
        ptr[i]=&arr[i];
        printf("%d\t\t%d\t\t%lu\n",i,*ptr[i],ptr[i]);
        
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    printf("\nMax Number =%d",max);
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

    maximum(a,n);

    return 0;

}