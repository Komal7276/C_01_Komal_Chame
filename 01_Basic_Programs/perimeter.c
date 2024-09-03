//write a program of perimeter of circle,triangle,rectangle,square,take input from user.By using function.

#include<stdio.h>
#include<conio.h>

int circle(int radius)
{
    double area;
    area=2*3.14*radius;

    return area;
}

int triangle(int a,int b,int c)
{
    double area;
    area=a+b+c;

    return area;
}

int rectangle(int length,int width)
{
    double area;
    area=(length+width)*2;

    return area;
}

int square(int side)
{
    double area;
    area=4*side;

    return area;
}

int main()
{
    int radius;
    int a,b,c;
    int length,width;
    int side;

    double area;

    printf("Enter the Radius of circle\n");
    scanf("%d",&radius);
    area=circle(radius);
    printf("\nPerimeter of Circle =%f\n",area);
    
    printf("\n--------------------------------------------------------------------------------------\n");
  
    printf("Enter the first side of Triangle\n");
    scanf("%d",&a);
    printf("\nEnter the second side of Triangle\n");
    scanf("%d",&b);
    printf("\nEnter the third side of Triangle\n");
    scanf("%d",&c);

    area=triangle(a,b,c);
    printf("\nPerimeter of Triangle =%f\n",area);

     printf("\n--------------------------------------------------------------------------------------\n");

    printf("Enter the length of Rectangle\n");
    scanf("%d",&length);
    printf("\nEnter the width of Rectangle\n");
    scanf("%d",&width);

    area=rectangle(length,width);
    printf("\nPerimeter of Rectangle =%f\n",area);

    printf("\n--------------------------------------------------------------------------------------\n");

    printf("Enter the side of Square\n");
    scanf("%d",&side);
    area=square(side);
    printf("\nPerimeter of Square =%f",area);


    return 0;
}