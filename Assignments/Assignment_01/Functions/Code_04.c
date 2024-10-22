/* Create an function that calculates the square of a
number.*/

#include<stdio.h>
#include<conio.h>

int Square(int ino)
{
    int icount;

    icount = ino*ino;

    return icount;
}

int main()
{
    int ivalue;
    int result;

    printf("\nEnter any number to fins its square : ");
    scanf("%d",&ivalue);

    result = Square(ivalue);

    printf("\nSquare of %d is = %d",ivalue,result);

    return 0;

}