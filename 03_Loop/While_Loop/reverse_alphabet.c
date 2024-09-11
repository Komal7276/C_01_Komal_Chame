/*
Write a program of while loop to print Reverse   Alphabets.
*/

#include<stdio.h>
#include<conio.h>

void Alphabet(char ch1,char ch2)
{
    while(ch1>=ch2)
    {
        printf("%c\n",ch1);
        ch1--;
    }

}

int main()
{
    char a='Z',b='A';

    //printf("Enter First Alphabet\n");
    //scanf("%c",&a);
    //printf("Enter Last Alphabet\n");
    //scanf("%c",&b);

    Alphabet(a,b);

    return 0;
}