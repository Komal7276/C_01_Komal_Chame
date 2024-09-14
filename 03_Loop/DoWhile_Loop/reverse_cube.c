/*
Write a program of dowhile loop to print the cube of numbers in reverse order,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void Square(int ino1,int ino2)
{
    printf("Cubes :\n");

    do
    {
        printf("%d=[%d]\n",ino1,(ino1*ino1*ino1));
        ino1++;
    }
    while(ino1<=ino2);
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter Numbers to Print the Cubes:\n\n");
    printf("Enter the First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last Number\n");
    scanf("%d",&ivalue2);

    Square(ivalue1,ivalue2);

    return 0;
}