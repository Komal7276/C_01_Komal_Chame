/*
Write a program of Structure using function to print the information of cricket player,
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Cricket_info
{
    char name[50];
    int match;
    int runs;
};

int display(struct Cricket_info c )
{
    printf("\n\n***Cricket Player Details***\n\n");

    printf("Name :%s\n",c.name);
    printf("Matches:%d\n",c.match);
    printf("High Runs :%d\n",c.runs);
    
    return 0;
}

int main()
{
    struct Cricket_info c1;

    printf("Enter Player name \n");
    scanf("%s",&c1.name);

    printf("Enter how many matches played \n");
    scanf("%d",&c1.match);

    printf("Enter Highest runs\n");
    scanf("%d",&c1.runs);
    
    display(c1);

    return 0;

}
