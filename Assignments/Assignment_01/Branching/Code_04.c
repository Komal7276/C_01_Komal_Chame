/*Create a program that takes the age of user and
checks if they are eligible to vote (age >= 18).*/

#include<stdio.h>
#include<conio.h>

int CheckAge(int ino)
{
    if(ino>=18)
    {
        printf("\nYou are Eligible for voting");
    }

    else
    {
        printf("\nYou are not Eligible for voting");
    }

    return 0;
}


int main()
{
    int age;

    printf("\n***** Check age for Voting *****\n");

    printf("Enter your age : ");
    scanf("%d",&age);

    CheckAge(age);

    return 0;

}