/*. Write a function that checks whether a given number is prime or
not.*/

#include<stdio.h>
#include<conio.h>

int CheckPrime(int ino)
{
    int i;
    int icount = 0;

    for(i=1 ; i<=ino ; i++)
    {
        if(ino % i == 0)
        {
            icount++;
        }
    }

    if(icount == 2)
    {
        printf("\n%d is Prime number",ino);
    }

    else
    {
        printf("\n%d is Not Prime number",ino);
    }

    return 0;

}


int main()
{
    int ivalue;

    printf("\nEnter any number to check it is prime number or not :");
    scanf("%d",&ivalue);

    CheckPrime(ivalue);

    return 0;

}