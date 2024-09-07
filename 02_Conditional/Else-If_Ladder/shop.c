/* write a program of if-else ladder of
shopping,discount and gst using function,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void shopping(int ino)
{
    int dis,total,gst,bill;

    if(ino>=50000)
    {
        dis=ino*40/100;
        printf("\nYou got discount of Rs/-%d",dis);

        total=ino-dis;

        gst=total*18/100;
        printf("\nGST =%d",gst);
        bill=total+gst;
        printf("\nTotal Bill with GST =%d",bill);
    }

    else if(ino>=35000 && ino<50000)
    {
        dis=ino*30/100;
        printf("\nYou got discount of Rs/-%d",dis);

        total=ino-dis;

        gst=total*18/100;
        printf("\nGST =%d",gst);
        bill=total+gst;
        printf("\nTotal Bill with GST =%d",bill);
    }

    else if(ino>=20000 && ino<35000)
    {
        dis=ino*20/100;
        printf("\nYou got discount of Rs/-%d",dis);

        total=ino-dis;

        gst=total*18/100;
        printf("\nGST =%d",gst);
        bill=total+gst;
        printf("\nTotal Bill with GST =%d",bill);
    }

    else if(ino>=10000 && ino<20000)
    {
        dis=ino*10/100;
        printf("\nYou got discount of Rs/-%d",dis);

        total=ino-dis;

        gst=total*18/100;
        printf("\nGST =%d",gst);
        bill=total+gst;
        printf("\nTotal Bill with GST =%d",bill);
    }
    
    else
    {
        printf("\nYou dont got any discount");
        gst=ino*18/100;
        bill=ino+gst;
        printf("\nTotal Bill with GST =%d",bill);
    }
}

int main()
{
    int shop_amt;
    printf("Enter your shopping amount\n");
    scanf("%d",&shop_amt);

    shop(shop_amt);

    return 0;
}