/*
Write a program of for loop to print the Odd Numbers,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void Odd(int ino1,int ino2)
{
    int i;

    printf("Odd Numbers :\n");
    
    for(i=ino1;i<=ino2;i++)
    {
        if(i%2==1)
        {
        printf("%d\n",i);
        }
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter the First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last Number\n");
    scanf("%d",&ivalue2);

    Odd(ivalue1,ivalue2);

    return 0;
}