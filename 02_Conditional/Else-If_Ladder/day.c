/* write a program of if-else ladder using function,
print the name of week day depending upon the week day number ,
take input week day number from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckDay(int ino)
{
    if(ino==1)
    {
        printf(" Monday");
    }

    else if(ino==2)
    {
        printf(" Tuesday");
    }

    else if(ino==3)
    {
        printf(" Wednesday");
    }

    else if(ino==4)
    {
        printf(" Thursday");
    }

    else if(ino==5)
    {
        printf(" Friday");
    }

    else if(ino==6)
    {
        printf(" Saturday");
    }

    else if(ino==7)
    {
        printf(" Sunday");
    }

    else
    {
        printf("Invalid week day number..");
    }
}

int main()
{
    int num;
    printf("Enter week day number :\n");
    scanf("%d",&num);

    CheckDay(num);

    return 0;
}