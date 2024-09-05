/*write a program of if-else using function to check whether a character is alphabet or not,
take input from user.*/

#include<stdio.h>
#include<conio.h>

void alpha(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("It is a Alphabet");
    }
    else
    {
        printf("It is Not a Alphabet");
    }
}

int main()
{
    char a;

    printf("Enter any alphabet\n");
    scanf("%c",&a);

    alpha(a);

    return 0;
}