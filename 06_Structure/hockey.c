/*
Write a program of Structure using function to print the information of hockey player 
take input from user.
*/

#include<stdio.h>
#include<string.h>

struct Hockey_info
{
    char name[50];
    int match;
    int score;
};

int display(struct Hockey_info h)
{
    printf("\n\n***Hockey Player Details***\n\n");

    printf("Name :%s\n",h.name);
    printf("Matches:%d\n",h.match);
    printf("High Score :%d\n",h.score);
    
    return 0;
}

int main()
{
    struct Hockey_info h1;

    printf("Enter Player name \n");
    scanf("%s",&h1.name);

    printf("Enter how many matches played \n");
    scanf("%d",&h1.match);

    printf("Enter Highest score\n");
    scanf("%d",&h1.score);
    
    display(h1);

    return 0;

}
