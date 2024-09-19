/*
Write a program of structure with array using function to print the details of patient,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Patient_info
{
    char name[50];
    int age;
    long mob_no;
    char address[100];
    char disease[100];
};

int display(struct Patient_info p[100])
{
    int i,n;

    printf("\n\nEnter number of patient\n");
    scanf("%d",&n);

    printf("\n\n***Patient Details***\n\n");

    printf("Name\t\t\tAge\t\t\tMob. No\t\t\t\tAddress\t\t\tDisease\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------\n");

    for(i=1;i<=n;i++)
    {
        printf("%s\t\t\t",p[i].name);
        printf("%d\t\t\t",p[i].age);
        printf("%lu\t\t\t",p[i].mob_no);
        printf("%s\t\t\t",p[i].address);
        printf("%s\t\t\t\n",p[i].disease);

        printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
    }

    return 0;
}

int main()
{
    struct Patient_info p1[100];

    int i,n;

    printf("Enter number of patients\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d. patient\n\n",i);

        {
            printf("Enter Your name \n");
            scanf("%s",&p1[i].name);
        }

        {
            printf("Enter Your age\n");
            scanf("%d",&p1[i].age);
        }

        {
            printf("Enter Your mobile number\n");
            scanf("%d",&p1[i].mob_no);
        }

        {
            printf("Enter Your address\n");
            scanf("%s",&p1[i].address);
        }

        {
            printf("Enter Your disease\n");
            scanf("%s",&p1[i].disease);
        }

        printf("\n");

    }

    display(p1);

    return 0;

}