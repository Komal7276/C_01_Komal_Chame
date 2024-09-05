/*write a program of if-else using function,
 if number of drinked cups are less than 20 then per cup for Rs/-15
 if drinked cups are greater than 20 the per cup for Rs/-10 ,take input from user.*/ 

#include<stdio.h>
#include<conio.h>

void CheckCup(int ino)
{
    int total;

    if(ino<20)
    {
        printf("You got per cup for Rs/-15\n");
        total=ino*15;
        printf("You Total Bill =%d",total);

    }
    else
    {
        printf("You got per cup for Rs/-10\n");
        total=ino*10;
        printf("You Total Bill =%d",total);

    }
}

int main()
{
    int cup;
    printf("Enter your number of cups\n");
    scanf("%d",&cup);

    CheckCup(cup);

    return 0;
}