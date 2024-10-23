/*Create an function that checks if a number is even or
odd.*/

#include<stdio.h>
#include<conio.h>

int CheckEvenOdd(int ino)
{
    if( ino%2 == 0)
    {
        printf("\n%d is Even number",ino);
    }

    else
    {
        printf("\n%d is Odd number",ino);
    }

    return 0;
}

int main()
{
    int ivalue;

    printf("\nEnter any number to check it is even or odd :");
    scanf("%d",&ivalue);

    CheckEvenOdd(ivalue);

    return 0;
}
