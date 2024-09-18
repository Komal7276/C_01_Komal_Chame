/*
Write a program to perform string functions ,
1.strlen()
2.strcpy()
3.strcmp()
4.strrev()
5.strcat()
take input from user.
*/

#include<stdio.h>
#include<string.h>

int length(char name[],char surname[])
{
    printf("Length of name is =[%d]\n",strlen(name));
    printf("Length of surname is =[%d]\n",strlen(surname));
}

int copy(char ichar1[],char ichar2[])
{
    strcpy(ichar1,ichar2);
    printf("Name is %s\n",ichar1);
    printf("Surname is %s\n",ichar2);
}

int reverse(char name[])
{
    strrev(name);
    printf("Reverse string is =%s\n",name);
}

int comparison(char name[],char surname[])
{
    if(strcmp(name,surname)==0)
    {
        printf("It is equal");
    }

    else
    {
        printf("It is not equal");
    }
}

int main()
{
    char name[50];
    char surname[100];

    printf("Enter name :");
    scanf("%s",&name);
    printf("Enter surname :");
    scanf("%s",&surname);

    printf("\nString Comparison\n");
    comparison(name,surname);

    printf("\n\nString Length\n");
    length(name,surname);

    printf("\nString Reverse\n");
    reverse(name);

    printf("\nString Copy\n");
    copy(name,surname);

    return 0;
}