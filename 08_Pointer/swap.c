/*
Write a program of pointer using function for swapping with 2 variable and swapping with 3 variable ,
take inout from user.
*/

#include<stdio.h>

int swap2(int ino1,int ino2)
{
    int *ptr1=&ino1;
    int *ptr2=&ino2;
    
    *ptr1=(*ptr1)+(*ptr2);
    *ptr2=(*ptr1)-(*ptr2);
    *ptr1=(*ptr1)-(*ptr2);

    printf("\n1st value =%d\n",*ptr1);
    printf("2nd value =%d\n",*ptr2);

}

int swap3(int ino1,int ino2)
{
    int ino3;
    int *ptr1=&ino1;
    int *ptr2=&ino2;
    int *ptr3=&ino3;

    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;

    printf("\n1st value =%d\n",*ptr1);
    printf("2nd value =%d\n",*ptr2);
 
}


int main()
{
    printf("\nSwapping with 2 variable\n\n");

    int ivalue1,ivalue2;

    printf("Enter first value :");
    scanf("%d",&ivalue1);
    printf("Enter second value :");
    scanf("%d",&ivalue2);

    swap2(ivalue1,ivalue2);
    
    printf("\nSwapping with 3 variable\n\n");

    int ivalue3,ivalue4;

    printf("Enter first value :");
    scanf("%d",&ivalue3);
    printf("Enter second value :");
    scanf("%d",&ivalue4);

    swap3(ivalue3,ivalue4);

    return 0;
}