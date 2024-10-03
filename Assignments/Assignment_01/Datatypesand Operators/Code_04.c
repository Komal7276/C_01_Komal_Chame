/*Create a progrma that calculates the 
area of circle using the Math.PI.constant.*/

#include<stdio.h>
#include<conio.h>


int CalculateArea(int ino)
{
    float area;

    area=3.14*ino*ino;

    return area;
}


int main()
{
    int radius;
    float area;

    printf("\n***** Area of Circle *****\n\n");

    printf("Enter radius of circle : ");
    scanf("%d",&radius);

    area=CalculateArea(radius);

    printf("\nArea = %f",area);
    return 0;
}