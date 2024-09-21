/*
Write a program of Union using function to print the name and age of person ,
take input from user.
*/

#include<stdio.h>
#include<string.h>

union info
{
    char name[50];
    int age;
}s1;

int display()
{
    printf("\nInformation :\n");

    printf("Name :%s\n",s1.name);
    printf("Age :%d\n",s1.age);

    return 0;
}

int main()
{
    //union info s1;

    printf("Enter Your Name :");
    scanf("%s",&s1.name);

    printf("Enter Your Age :");
    scanf("%d",&s1.age);

    display(s1);

    return 0;
}
