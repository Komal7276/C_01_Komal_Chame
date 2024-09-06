/*write a program of if-else using function to check the age is eligible for voting or not ,
take input from user.*/ 

#include<stdio.h>
#include<conio.h>

void vote(int ino)
{
    if(ino>18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
}

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);

    vote(age);

    return 0;
}