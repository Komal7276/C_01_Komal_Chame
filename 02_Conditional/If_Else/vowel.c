/*write a program of if-else using function to check whether a character is vowel or constant,
take input from user.*/ 


#include<stdio.h>
#include<conio.h>

void vowel(char ch)
{
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' ||ch=='u' || ch=='U')
    {
        printf("%c is Vowel",ch);
    }
    else
    {
        printf("%c is Constant",ch);
    }
}

int main()
{
    char c;
    printf("Enter any Character\n");
    scanf("%c",&c);

    vowel(c);

    return 0;
}