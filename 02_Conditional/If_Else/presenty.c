/*write a program of if-else using function to check the presenty of student,
if presenty is above 75% then he is eligible for exam otherwise not ,take input from user. */

#include<stdio.h>
#include<conio.h>

void CheckPresenty(int ino)
{
    if(ino>=75)
    {
        printf("You are eligible for Exam");
    }
    else
    {
        printf("You are not eligible for Exam");
    }
}

int main()
{
    int pr;
    printf("Enter your presenty\n");
    scanf("%d",&pr);

    CheckPresenty(pr);

    return 0;
}