/*write a program of if-else using function to check the angle is obtuse angle or acute angle ,
take input from user.*/ 

#include<stdio.h>
#include<conio.h>

void CheckAngle(int ino)
{
    if(ino>90 )
    {
        printf("This is Obtuse Angle");
    }
    else
    {
        printf("This is Acute Angle");
    }
}

int main()
{
    int angle;
    printf("Enter a angle\n");
    scanf("%d",&angle);
    CheckAngle(angle);

    return 0;
}