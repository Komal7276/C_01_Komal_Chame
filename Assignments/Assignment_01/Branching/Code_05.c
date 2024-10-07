/*Write a program to check whether a given character is a vowel
or consonant using a switch-case statement.*/

#include<stdio.h>
#include<conio.h>

int CheckAlphabet(char ch)
{
    switch((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || 
           (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))
    {

        case 1:
        printf("\n%c is Vowel",ch);
        break;

        case 0:
        printf("\n%c is Constant",ch);
        break;
        
    }


    return 0;
}


int main()
{
    char alpha;

    printf("\n***** Check Vowel or Constant *****\n\n");

    printf("Enter any character : ");
    scanf("%c",&alpha);

    CheckAlphabet(alpha);

    return 0;
}