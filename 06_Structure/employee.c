/*
Write a program of Structure using function to print the information of employee,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Employee_info
{
    char name[50];
    char com_name[100];
    char edu[100];
    int age;
    int salary;
};

int display(struct Employee_info e)
{
    printf("\n\n***Employee Information***\n\n");

    printf("Name :%s\n",e.name);
    printf("Company Name :%s\n",e.com_name);
    printf("Education :%s\n",e.edu);
    printf("Age :%d\n",e.age);
    printf("Salary :%d\n",e.salary);
    
    return 0;
}

int main()
{
    struct Employee_info e1;

    printf("Enter Your Name \n");
    scanf("%s",&e1.name);

    printf("Enter Your Company Name \n");
    scanf("%s",&e1.com_name);

    printf("Enter Your Education\n");
    scanf("%s",&e1.edu);

    printf("Enter Your Age\n");
    scanf("%d",&e1.age);

    printf("Enter Your Salary\n");
    scanf("%d",&e1.salary);

    display(e1);

    return 0;

}
