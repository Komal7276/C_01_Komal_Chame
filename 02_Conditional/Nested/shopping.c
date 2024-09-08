/*
write a program of shopping and discount ,
in nested if-else using function,
take input from user. 
*/

#include<stdio.h>
#include<conio.h>

void shop(int ino)
{
    int dis,total,gst,bill;

    if(ino>=15000)
	{
		if(ino>35000)
		{
			dis=ino*35/100;
			printf("You got discount of Rs-%d",dis);

			total=ino-dis;

            gst=total*18/100;
            printf("\nGST =%d",gst);
            
            bill=total+gst;
    		printf("\nTotal Bill with GST =%d",bill);
		}

		else
		{
			dis=ino*15/100;
			printf("You got discount of Rs-%d",dis);

			total=ino-dis;

            gst=total*18/100;
            printf("\nGST =%d",gst);
            
            bill=total+gst;
    		printf("\nTotal Bill with GST =%d",bill);
		
		}
	}

	else
	{
		if(ino<15000 && ino>8000)
		{
			dis=ino*15/100;
			printf("You got discount of Rs-%d",dis);

			total=ino-dis;
			
            gst=total*18/100;
            printf("\nGST =%d",gst);
            
            bill=total+gst;
    		printf("\nTotal Bill with GST =%d",bill);
		}

		else
		{
			dis=ino*7/100;
			printf("You got discount of Rs-%d",dis);

			total=ino-dis;
			
            gst=total*18/100;
            printf("\nGST =%d",gst);
            
            bill=total+gst;
    		printf("\nTotal Bill with GST =%d",bill);
		}
	}
}

int main()
{
    int amt;
    
    printf("Enter Your Shopping Amount \n");
    scanf("%d",&amt);

    shop(amt);

    return 0;
}