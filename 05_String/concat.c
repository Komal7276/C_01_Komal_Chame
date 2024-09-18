/*
Write a program to perform string function that is strcat()
take input from user.
*/

#include<stdio.h>
#include<string.h>

int concatination(char name[],char surname[])
{
    strcat(name,surname);
    printf("Name =%s\n",name);
}

int main()
{
    char name[50];
    char surname[100];

    printf("Enter name :");
    scanf("%s",&name);
    printf("Enter surname :");
    scanf("%s",&surname);

    printf("\nString Concatination\n");
    concatination(name,surname);

}