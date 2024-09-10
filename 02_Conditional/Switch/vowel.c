/*
write a program of switch using function,
to check whether the character is vowel or constant,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void CheckCharacter(char ch)
{
    switch((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') ||
     (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))
     {
        case 1:
        printf("%c is Vowel",ch);
        break;

        case 0:
        printf("%c is Constant",ch);
        break;
     }
}

int main()
{
    char ch;

    printf("Enter any Character\n");
    scanf("%c",&ch);

    CheckCharacter(ch);
}