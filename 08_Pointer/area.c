/*
Write a program of pointer using function to perform  Area of circle ,rectangle ,square ,triangle ,
take input from user.
*/

#include<stdio.h>

int circle(int radius)
{
    int *ptr1=&radius;
    double area;

    area=3.14*(*ptr1)*(*ptr1);
    printf("\nArea of Circle =%f\n\n",area);

}

int rectangle(int length,int width)
{
    int *ptr1=&length;
    int *ptr2=&width;
    double area;

    area=(*ptr1)*(*ptr2);
    printf("\nArea of Rectangle =%f\n\n",area);

}

int square(int side)
{
    int *ptr1=&side;
    double area;

    area=(*ptr1)*(*ptr1);
    printf("\nArea of Square =%f\n\n",area);

}

int triangle(int base,int height)
{
    int *ptr1=&base;
    int *ptr2=&height;
    double area;

    area=(*ptr1)*(*ptr2)/2;
    printf("\nArea of Triangle =%f\n\n",area);

}

int main()
{
    int r;
    printf("Enter radius of circle :");
    scanf("%d",&r);
    circle(r);

    int l,w;
    printf("Enter length of rectangle :");
    scanf("%d",&l);
    printf("Enter width of rectangle :");
    scanf("%d",&w);
    rectangle(l,w);

    int s;
    printf("Enter side of square :");
    scanf("%d",&s);
    square(s);

    int b,h;
    printf("Enter the base of triangle :");
    scanf("%d",&b);
    printf("Enter the height of triangle :");
    scanf("%d",&h);
    triangle(b,h);

    return 0;

}