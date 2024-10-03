/*Implement a grading system that assigns grades (A, B, C, etc.)
based on a student's score using if-else conditions.*/

#include<stdio.h>
#include<conio.h>

int CheckScore(int ino)
{
    if(ino<=100 && ino>=90)
    {
        printf("\nYou got A grade");
    }

    else if(ino<90 && ino>=75)
    {
        printf("\nYou got B grade");
    }

    else if(ino<75 && ino>=60)
    {
        printf("\nYou got C grade");
    }

    else if(ino<60 && ino>=35)
    {
        printf("\nYou got D grade");
    }

    else if(ino<35 && ino>=0)
    {
        printf("\nYou are Fail");
    }

    else
    {
        printf("\nInvalid Marks!! Please enter correct marks");
    }

    return 0;
}


int main()
{
    int marks;

    printf("***** Check score *****\n\n");

    printf("Enter your score : ");
    scanf("%d",&marks);

    CheckScore(marks);

    return 0;
}