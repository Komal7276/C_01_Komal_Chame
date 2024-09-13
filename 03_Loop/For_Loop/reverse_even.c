/*
Write a program of for loop to print the Even Numbers in Reverse order,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void Even(int ino1,int ino2)
{
    int i;

    printf("Even Numbers :\n");
    
    for(i=ino1;i>=ino2;i--)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter the First large Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last small Number\n");
    scanf("%d",&ivalue2);

    Even(ivalue1,ivalue2);

    return 0;
}