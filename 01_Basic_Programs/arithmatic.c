//wirte a program to perform arithmatic operation,by using function,take the input two numbers from user.

#include<stdio.h>
#include<conio.h>

int add(int ino1, int ino2)
{
    int icnt1;
    icnt1=ino1+ino2;
    
    return icnt1;  

}

int sub(int ino3,int ino4)
{
    int icnt2;
    icnt2=ino3-ino4;

    return icnt2;
}

int mult(int ino5,int ino6)
{
    int icnt3;
    icnt3=ino5*ino6;

    return icnt3;
}

int div(int ino7,int ino8)
{
    int icnt4;
    icnt4=ino7/ino8;

    return icnt4;
}

int main()
{
    int ivalue1,ivalue2;
    float ivalue3=0;

    printf("Enter first number\n");
    scanf("%d",&ivalue1);

    printf("\nEnter second number \n");
    scanf("%d",&ivalue2);

    ivalue3=add(ivalue1,ivalue2);
    printf("\nAddition =%f\n\n",ivalue3);

    ivalue3=sub(ivalue1,ivalue2);
    printf("Subtraction =%f\n\n",ivalue3);

    ivalue3=mult(ivalue1,ivalue2);
    printf("Multiplication =%f\n\n",ivalue3);

    ivalue3=div(ivalue1,ivalue2);
    printf("Division =%f\n\n",ivalue3);


    return 0;
}