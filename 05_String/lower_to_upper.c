#include<stdio.h>
#include<string.h>

int changeCase(char name[])
{
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='a' && name[i]<='z')
        {
            name[i]=name[i]-32;
        }
    }

    printf("UpperCase String =%s",name);
}
int main()
{
    char name[100];

    printf("Enter Name :");
    scanf("%d",&name);

    changeCase(name);
}