//write a program to print the sizeof datatype in byte,by using function.

#include<stdio.h>
#include<conio.h>

void memory_space()
{
    int a;
    float b;
    char c;
    double d;
    long e;

    printf("\nSize of Integer =[%d]\n\n",sizeof(a));
    printf("Size of Float =[%d]\n\n",sizeof(b));
    printf("Size of Character =[%d]\n\n",sizeof(c));
    printf("Size of Double =[%d]\n\n",sizeof(d));
    printf("Size of Long =[%d]\n",sizeof(e));

}

int main()
{
    printf("Datatype Memory Space in Byte...\n");
    memory_space();

    return 0;
}