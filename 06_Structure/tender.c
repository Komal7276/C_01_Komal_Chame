/*
Write a program of Structure using function to print the information of tender,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Tender_info
{
    char name[50],com_name[50];
    int cost;
};

int display(struct Tender_info t)
{
    printf("\n\n***Tender Details***\n\n");

    printf("Name :%s\n",t.name);
    printf("Company Name:%s\n",t.com_name);
    printf("Cost :%d\n",t.cost);
    
    return 0;
}

int main()
{
    struct Tender_info t1;

    printf("Enter Your Name \n");
    scanf("%s",&t1.name);

    printf("Enter Your Company Name\n");
    scanf("%s",&t1.com_name);

    printf("Enter tender cost\n");
    scanf("%d",&t1.cost);

    display(t1);

    return 0;

}
