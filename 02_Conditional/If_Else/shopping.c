/* write a program of if-else of
shopping and discount using function,
take input from user.
*/

#include<stdio.h>
#include<conio.h>

void shop(int ino)
{
    int dis,total,gst,bill;

    if(ino>=15000)
    {
        dis=ino*25/100;
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