//write a program of if-else of relational operator using function ,take input from user. 


#include<stdio.h>
#include<conio.h>

void less(int ino1)
{
    if(ino1<50)
    {
        printf("\n%d is less than 50",ino1);
    }
    else
    {
        printf("\n%d is greater than 50",ino1);
    }
}

void greater(int ino2)
{
    if(ino2>50)
    {
        printf("\n%d is greater than 50",ino2);
    }
    else
    {
        printf("\n%d is less than 50",ino2);
    }
}

void equal(int ino3)
{
    if(ino3==100)
    {
        printf("\n%d is equal to 100",ino3);
    }
    else
    {
        printf("\n%d is not equal to 100",ino3);
    }
}


int main()
{
    int ivalue1;
    printf("\nLess than ...\n");
    printf("Enter any Number\n");
    scanf("%d",&ivalue1);
    less(ivalue1);

    int ivalue2;
    printf("\nGreater than ...\n");
    printf("Enter any Number\n");
    scanf("%d",&ivalue2);
    greater(ivalue2);

    int ivalue3;
    printf("\nEqual...\n");
    printf("Enter any Number\n");
    scanf("%d",&ivalue3);
    equal(ivalue3);  

    return 0;  
}