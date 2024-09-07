/*
write a program of if-else ladder using function,
to check the angle is acute ,right or obtuse angle,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckAngle(int ino)
{
        if(ino>=0 && ino<90)
		{
			printf("This is Acute angle");
		}

		else if(ino==90)
		{
			printf("This is Right angle");
		}

		else if(ino>90 && ino<=180)
		{
			printf("This is Obtuse angle");
		}

		else
		{
			printf("There is no any angle");
		}
}

int main()
{
    int angle;
    printf("Enter angle :\n");
    scanf("%d",&angle);
	
    CheckAngle(angle);

    return 0;
}