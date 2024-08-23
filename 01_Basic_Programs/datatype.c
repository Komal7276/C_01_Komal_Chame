//write a program to pirnt the datatypes,by using function.

#include<stdio.h>
#include<conio.h>

void data(int ino1,long ino2 ,float ino3)
{
    printf("\n\nInteger Value =%d\n",ino1);
    printf("Long Value =%lu\n",ino2);
    printf("Float Value =%f\n",ino3);
    
}

void dbl()
{
    double ino4=123.456;
    char ino5='k';
    
    printf("Double Value =%f\n",ino4);
    printf("Character Value =%c\n",ino5);
} 

int main()
{

    int ivalue1;
    long ivalue2;
    float ivalue3;
    double ivalue4;
    char ivalue5;

    printf("Datatpes ...\n\n");
    printf("Enter any Integer Number\n");
    scanf("%d",&ivalue1);

    printf("\nEnter any Long Integer Number\n");
    scanf("%lu",&ivalue2);

    printf("\nEnter any Decimal Number\n");
    scanf("%f",&ivalue3);

    data(ivalue1,ivalue2,ivalue3);
    dbl();

    return 0;

}