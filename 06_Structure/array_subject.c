/*
Write a program of Structure with array using function to print the name and Marks of student,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Subject
{
    char name[50];
    int roll_no;
    int phy,chem,math;
};

int display(struct Subject s[100])
{
    int i,n;

    printf("\nEnter number of student\n");
    scanf("%d",&n);

    printf("\n\n***Student Details***\n\n");

    printf("Name\t\tRoll number\t\tphysics marks\t\t chemistry marks\t\t math marks\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n");


    for(i=1;i<=n;i++)
    {
        printf("%s\t\t\t",s[i].name);
        printf("%d\t\t\t",s[i].roll_no);
        printf("%d\t\t\t",s[i].phy);
        printf("%d\t\t\t",s[i].chem);
        printf("%d\t\t\t\n",s[i].math);

        printf("----------------------------------------------------------------------------------------------------------------------\n");
    }
    return 0;
}

int main()
{
    struct Subject s1[100];

    int i,n;

    printf("Enter number of students\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d.student\n",i);

        {
            printf("Enter Your name \n");
            scanf("%s",&s1[i].name);
        }

        {
            printf("Enter Your roll no \n");
            scanf("%d",&s1[i].roll_no);
        }

        {
            printf("Enter Your physics marks\n");
            scanf("%d",&s1[i].phy);
        }

        {
            printf("Enter Your chemistry marks\n");
            scanf("%d",&s1[i].chem);
        }

        {
            printf("Enter Your math marks \n");
            scanf("%d",&s1[i].math);
        }

        printf("\n");

    }
    display(s1);

    return 0;

}
