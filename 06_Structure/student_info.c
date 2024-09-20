/*
Write a program of Structure using function to print the information of student ,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Student_info
{
    char name[50];
    int age;
    int roll_no;
    char div;
    int fees;
};

int display(struct Student_info i)
{
    printf("\n\n***Student Details***\n\n");

    printf("Name :%s\n",i.name);
    printf("Age :%d\n",i.age);
    printf("Roll No :%d\n",i.roll_no);
     printf("Division :%c\n",i.div);
    printf("Fees :%d\n",i.fees);

    return 0;
}

int main()
{
    struct Student_info s;

    printf("Enter Your name \n");
    scanf("%s",&s.name);

    printf("Enter Your age\n");
    scanf("%d",&s.age);

    printf("Enter Your Roll-No\n");
    scanf("%d",&s.roll_no);

    printf("Enter Your division \n");
    scanf("%s",&s.div);

    printf("Enter Your fees\n");
    scanf("%d",&s.fees);

    display(s);

    return 0;

}
