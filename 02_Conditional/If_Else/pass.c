/*write a program of if-else using function to check the student is pass or fail ,
take input from user.*/


#include<stdio.h>
#include<conio.h>

void check(int ino)
{
    if(ino>=35)
    {
        printf("You are Pass");
    }
    else
    {
        printf("You are Fail");
    }
}

int main()
{
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    check(marks);

    return 0;
}