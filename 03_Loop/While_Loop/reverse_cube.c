/*
Write a program of while loop to print the cube of numbers in reverse order,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void Cube(int ino1,int ino2)
{
    printf("\nCubes :\n");

    while(ino1>=ino2)
    {
        printf("%d=[%d]\n",ino1,(ino1*ino1*ino1));
        ino1--;
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter Numbers to Print the Cubes:\n\n");
    printf("Enter the First large  Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last small Number\n");
    scanf("%d",&ivalue2);

    Cube(ivalue1,ivalue2);

    return 0;
}