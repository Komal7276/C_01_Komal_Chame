//write a program of simple interest,using function,take inout from user.

#include<stdio.h>
#include<conio.h>

int interest(int pr,int r,int n)
{
    float sim_in;

    sim_in=pr*r*n/100;
    
    return sim_in;
}

int main()
{
    int principle,rate,time;
    float si;

    printf("Enter the principle\n");
    scanf("%d",&principle);

    printf("\nEnter the rate\n");
    scanf("%d",&rate);

    printf("\nEnter the time\n");
    scanf("%d",&time);

    si=interest(principle,rate,time);
    printf("\nSimple Interest =%f",si);

    return 0;
}