/*Write a program to print the first 10 natural numbers using a
for loop.*/

#include<stdio.h>
#include<conio.h>

int NaturalNum()
{
    int i;

    printf("\nNatural Numbers :\n\n");

    for(i=1;i<=10;i++)
    {
        printf("%d \n",i);
    }

    return 0;
}


int main()
{
    NaturalNum();

    return 0;    
}
