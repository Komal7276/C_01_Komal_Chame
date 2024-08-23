//write a program of area of circle,triangle,rectangle,square,take input from user.using function.

#include<stdio.h>
#include<conio.h>

int circle(int radius)
{
    double area;
    area=3.14*radius*radius;

    return area;
}

int triangle(int base,int height)
{
    double area;
    area=base*height/2;

    return area;
}

int rectangle(int length,int width)
{
    double area;
    area=length*width;

    return area;
}

int square(int side)
{
    double area;
    area=side*side;

    return area;
}

int main()
{
    int radius;
    int base,height;
    int length,width;
    int side;

    double area;

    printf("Enter the Radius of circle\n");
    scanf("%d",&radius);
    area=circle(radius);
    printf("\nArea of Circle =%f\n",area);
    
    printf("\n--------------------------------------------------------------------------------------\n");
  
    printf("Enter the base of Triangle\n");
    scanf("%d",&base);
    printf("Enter the height of Triangle\n");
    scanf("%d",&height);

    area=triangle(base,height);
    printf("\nArea of Triangle =%f\n",area);

     printf("\n--------------------------------------------------------------------------------------\n");

    printf("Enter the length of Rectangle\n");
    scanf("%d",&length);
    printf("Enter the width of Rectangle\n");
    scanf("%d",&width);

    area=rectangle(length,width);
    printf("\nArea of Rectangle =%f\n",area);

    printf("\n--------------------------------------------------------------------------------------\n");

    printf("Enter the side of Square\n");
    scanf("%d",&side);
    area=square(side);
    printf("\nArea of Square =%f",area);


    return 0;
}