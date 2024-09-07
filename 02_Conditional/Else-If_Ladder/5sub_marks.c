/*
write a program of if-else ladder using function,
take 5 subject marks and find the total marks and 
find the percentage and grade,
take input from user.
*/


#include<stdio.h>
#include<conio.h>

void marks(int math,int phy,int eng,int ch,int hin)
{
    int total;
    float per;

    printf("Marks :\n\n");
    printf("Math -%d\n",math);
    printf("Physics -%d\n",phy);
    printf("English -%d\n",eng);
    printf("Chemistry -%d\n",ch);
    printf("Hindi -%d\n",hin);

    total=math+phy+eng+ch+hin;
    printf("\nTotal Marks =%d",total);

    per=total*100/500;
    printf("\nPercentage =%f",per);

    if(per>90 && per<=100)
    {
        printf("\nYou got A grade");
    }

    else if(per>70 && per<=90)
    {
        printf("\nYou got B grade");
    }

    else if(per>50 && per<=70)
    {
        printf("\nYou got C grade");
    }

    else if(per>=35 && per<=50)
    {
        printf("\nYou are Pass");
    }

    else if(per>=0 && per<35)
    {
        printf("\nYou are Fail");
    }

    else
    {
        printf("\nInvalid Marks");
    }

}

int main()
{
    int math,phy,eng,ch,hin;
    printf("Enter Your Math Marks\n");
    scanf("%d",&math);

    printf("Enter Your Physics Marks\n");
    scanf("%d",&phy);

    printf("Enter Your English Marks\n");
    scanf("%d",&eng);

    printf("Enter Your Chemistry Marks\n");
    scanf("%d",&ch);

    printf("Enter Your Hindi Marks\n");
    scanf("%d",&hin);


    marks(math,phy,eng,ch,hin);

    return 0;   
}