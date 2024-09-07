/*
write a program of if-else ladder using function,
to check the triangle is equilateral,isosceles,scalene triangle,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckTriangle(int ino1,int ino2,int ino3)
{
        if((ino1==ino2) && (ino2==ino3))
		{
			printf("This is Equilateral Triangle");
		}

		else if((ino1==ino2) || (ino2==ino3) || (ino1==ino3))
		{
			printf("This is Isosceles Triangle");
		}

		else
		{
			printf("This is Scalene Triangle");
		}
}

int main()
{
    int first,second,third;
    printf("Enter first side :\n");
    scanf("%d",&first);
    printf("Enter second side :\n");
    scanf("%d",&second);
    printf("Enter third side :\n");
    scanf("%d",&third);

    CheckTriangle(first,second,third);

    return 0;
}