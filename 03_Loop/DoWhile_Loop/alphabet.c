/*
Write a program of dowhile loop to print all Alphabets.
*/

#include<stdio.h>
#include<conio.h>

void Alphabet(char ch1,char ch2)
{
    do
    {
        printf("%c\n",ch1);
        ch1++;
    } 
    while (ch1<=ch2);    
}

int main()
{
    char ch1='A',ch2='Z';

    Alphabet(ch1,ch2);

    return 0;
}