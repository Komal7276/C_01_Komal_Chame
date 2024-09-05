/*write a program of if-else using function
 to check whether a number is divisible by 3 and 5,
take input from user.*/


#include<stdio.h>
#include<conio.h>

void Div35(int ino1)
{
    if(ino1%3==0 && ino1%5==0)
    {
        printf("%d is divisible by 3 and 5",ino1);
    }
    else
    {
        printf("%d is not divisible by 3 and 5",ino1);
    }
}


int main()
{
    int ivalue1;

    printf("Enter a number to check it is divisible by 3 and 5 or not\n");
    scanf("%d",&ivalue1);

    Div35(ivalue1);

    return 0;
}