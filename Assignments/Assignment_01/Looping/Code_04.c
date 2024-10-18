/*Create a program that prints all even numbers between 1 and
50 using a for loop.*/

#include<stdio.h>
#include<conio.h>

int EvenNum()
{
    int i;

    printf("\nEven numbers between 1 and 50 \n\n");

    for(i=1;i<=50;i++)
    {
        if( i%2 == 0)
        {
            printf("%d\n",i);
        }
    }

    return 0;

}

int main()
{
    EvenNum();

    return 0;
}