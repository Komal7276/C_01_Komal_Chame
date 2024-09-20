/*
Write a program of Structure using function to print the name and age of person ,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct info
{
    char name[50];
    int age;
};

int display(struct info s)
{
    printf("\nInformation :\n");

    printf("Name :%s\n",s.name);
    printf("Age :%d\n",s.age);

    return 0;
}

int main()
{
    struct info s1;

    printf("Enter Your Name :");
    scanf("%s",&s1.name);

    printf("Enter Your Age :");
    scanf("%d",&s1.age);

    display(s1);

    return 0;
}
