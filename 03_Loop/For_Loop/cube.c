/*
Write a program of for loop to print the Cube of Numbers,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void Cube(int ino1,int ino2)
{
    int i;

    printf("Cubes :\n");
    
    for(i=ino1;i<=ino2;i++)
    {
        printf("%d=[%d]\n",i,(i*i*i));
    }
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter the First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter the Last Number\n");
    scanf("%d",&ivalue2);

    Cube(ivalue1,ivalue2);

    return 0;
}