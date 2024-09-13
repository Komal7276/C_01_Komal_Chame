/*
Write a program of for loop to print the all alphabet,
take inout from user.
*/

#include<stdio.h>
#include<conio.h>

void Alphabet(char ch1,char ch2)
{
    int i;

    printf("Alphabets :\n");

    for(i=ch1;i<=ch2;i++)
    {
        printf("%c\n",i);
    }
}

int main()
{
    char ch1='A',ch2='Z';

    //printf("Enter the First Large Number\n");
    //scanf("%d",&ivalue1);
    //printf("Enter the Last small Number\n");
    //scanf("%d",&ivalue2);

    Alphabet(ch1,ch2);

    return 0;
}