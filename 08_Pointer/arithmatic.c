/*
Write a program of pointer using function to perform arithmatic operation ,
take input from user. 
*/

#include<stdio.h>

int arithmatic(int ino1,int ino2)
{
    int *ptr1=&ino1;
    int *ptr2=&ino2;
    int icount;

    printf("\nFirst No \t Second No \t Address of 1st No \t Address of 2nd No \n\n");
    printf("%d \t\t %d \t\t %lu \t\t %lu\n\n",ino1,ino2,ptr1,ptr2);

    icount=(*ptr1)+(*ptr2);
    printf("Addition =%d\n",icount);

    icount=(*ptr1)-(*ptr2);
    printf("Subtraction =%d\n",icount);

    icount=(*ptr1)*(*ptr2);
    printf("Multiplication =%d\n",icount);

    icount=(*ptr1)/(*ptr2);
    printf("Division =%d\n",icount);

    return 0;
}

int main()
{
    int ivalue1,ivalue2;

    printf("Enter first number :");
    scanf("%d",&ivalue1);

    printf("Enter second number :");
    scanf("%d",&ivalue2);

    arithmatic(ivalue1,ivalue2);

    return 0;
}