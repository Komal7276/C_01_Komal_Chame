/**
 * Project of Different types of Calculators.
 * 1. Normal Calculator
 * 2. Scientific Calculator
 * 3. Programmers Calculator
 * 
 * */


//Headers
#include<stdio.h>
#include<math.h>


//---------------------Normal Calculator

//ADDITION
void Addition()
{
	int inum1, inum2, result;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 + inum2;

	printf("\nAddition\n");
	printf("%d + %d = %d\n", inum1, inum2, result);


}


//SUBTRACTION
void Subtraction()
{
	int inum1, inum2, result;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 - inum2;

	printf("\nSubtraction\n");
	printf("%d - %d = %d\n", inum1, inum2, result);
}



//MULTIPLICATION
void Multiplication()
{
	int inum1, inum2, result;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 * inum2;

	printf("\nMultiplication\n");
	printf("%d * %d = %d\n", inum1, inum2, result);
}



//DIVISION
void Division()
{
	int inum1, inum2, result;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 / inum2;

	printf("\nDivision\n");
	printf("%d / %d = %d\n", inum1, inum2, result);
}



//REMAINDER
void Remainder()
{
	int inum1, inum2, result;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 % inum2;

	printf("\nRemainder\n");
	printf("%d %% %d = %d\n", inum1, inum2, result);
}



//SQUARE
void Square()
{
	int inum, result;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	result = inum * inum;

	printf("\nSquare\n");
	printf("%d = %d\n", inum, result);

}



//CUBE
void Cube()
{
	int inum, result;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	result = inum * inum * inum;

	printf("\nCube\n");
	printf("%d = %d\n", inum, result);

}



//4th Power
void Fourth_Power()
{
	int inum, result;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	result = inum * inum * inum * inum;

	printf("\n4th Power\n");
	printf("%d = %d\n", inum, result);

}



//5th Power
void Fifth_Power()
{
	int inum, result;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	result = inum * inum * inum * inum * inum;

	printf("\n5th Power\n");
	printf("%d = %d\n", inum, result);

}



//PERCENTAGE
void Percentage()
{
	float total_marks, obtained_marks;
	int result;

	printf("\n Enter total marks : ");
	scanf("%f",&total_marks);

	printf(" Enter obtained marks : ");
	scanf("%f",&obtained_marks);

	result = (obtained_marks / total_marks) * 100;

	printf("\nPercentage = %d %%\n", result);

}




//------------------------Scientific calculator

//Nth Power
void N_Power()
{
	int base, exponent;//(exponent ==> power)
	int result;

	printf("\n Enter base : ");
	scanf("%d",&base);

	printf(" Enter exponent(power) : ");
	scanf("%d",&exponent);

	result = pow(base,exponent);

	printf("\nNth Power = %d\n", result);


}



//FACTORIAL
void Factorial()
{
	int inum, fact = 1;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	for(int le = 1; le <= inum; ++le)
	{
		fact = fact * le;
	}

	printf("\nFactorial of %d = %d\n", inum, fact);
	

}



//REVERSE
void Reverse()
{

	int inum, reverse_no = 0;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	printf("\n\nBefore Reverse = %d\n", inum);

	while(inum != 0)
	{
		reverse_no = reverse_no * 10 + inum % 10;
		inum = inum / 10;
	}

	
	printf("After Reverse = %d\n", reverse_no);
}




//----------------------------Programmers Calculator


//DECIMAL TO BINARY
int Decimal_TO_Binary(int inum)
{
	int quotient = 0, remainder = 0, result = 0;

	printf("\nBinary of %d = ", inum);

	while(inum != 0)
	{
		quotient = inum / 2;
		remainder = inum % 2;

		printf("%d ", remainder);

		inum = quotient;
	}
	
}	



//BITWISE AND
void Bitwise_AND()
{
	int inum1, inum2, result = 0;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 & inum2;

	printf("\nBitwise AND : \n");
	printf("Result = %d\n\n", result);


	//Function call to find the binary 
	Decimal_TO_Binary(inum1);
	printf("\n\n");
	Decimal_TO_Binary(inum2);
	printf("\n\n");
	Decimal_TO_Binary(result);


}



//BITWISE OR
void Bitwise_OR()
{
	int inum1, inum2, result = 0;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 | inum2;

	printf("\nBitwise OR : \n");
	printf("\nResult = %d\n", result);


	//Function call to find the binary 
	Decimal_TO_Binary(inum1);
	printf("\n\n");
	Decimal_TO_Binary(inum2);
	printf("\n\n");
	Decimal_TO_Binary(result);

}



//BITWISE xOR
void Bitwise_xOR()
{
	int inum1, inum2, result = 0;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 ^ inum2;

	printf("\nBitwise xOR : \n");
	printf("\nResult = %d\n", result);


	//Function call to find the binary 
	Decimal_TO_Binary(inum1);
	printf("\n\n");
	Decimal_TO_Binary(inum2);
	printf("\n\n");
	Decimal_TO_Binary(result);

}




//BITWISE RIGHT SHIFT
void Bitwise_Right_Shift()
{
	int inum1, inum2, result = 0;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 >> inum2;

	printf("\nBitwise Right Shift : \n");
	printf("\nResult = %d\n", result);


	//Function call to find the binary 
	Decimal_TO_Binary(result);


}



//BITWISE LEFT SHIFT
void Bitwise_Left_Shift()
{
	int inum1, inum2, result = 0;

	printf("\nEnter First number : ");
	scanf("%d",&inum1);

	printf("Enter Second number : ");
	scanf("%d",&inum2);

	result = inum1 << inum2;

	printf("\nBitwise Left Shift : \n");
	printf("\nResult = %d\n", result);


	//Function call to find the binary 
	Decimal_TO_Binary(result);


}



//BITWISE NOT
void Bitwise_NOT()
{
	int inum, result = 0;

	printf("\nEnter the number : ");
	scanf("%d",&inum);

	result = ~inum;

	printf("\nBitwise Not : \n");
	printf("\nResult = %d\n", result);


	//Function call to find the binary 
	Decimal_TO_Binary(result);

}



//Main Function
int main()
{

	printf("\n\n\t\t **  CALCULATOR  **\n\n");
	printf("*****	Click given short code to select Different types of CALCULATORs		*****\n\n\n");

	printf("Short Code\t\tCalculator Name\n\n");
	printf("1\t\t=>\tNormal Calculator\n");
	printf("2\t\t=>\tScientific Calculator\n");
	printf("3\t\t=>\tProgrammers Calculator\n\n");


	int option;

	printf("Enter the Short code : ");
	scanf("%d",&option);

	if( option == 1)
	{
		printf("\n\n\t\t **		Normal Calculator 	**\n\n");
		printf("***** 	Click given short code to perform Different operations\n\n\n");

		printf("Operation\t\tShort Code\n\n");
		printf("Addition\t=>\t +\n");
		printf("Subtraction\t=>\t -\n");
		printf("Multiplication\t=>\t *\n");
		printf("Division\t=>\t /\n");
		printf("Remainder\t=>\t %% \n");
		printf("Square\t\t=>\t s\n");
		printf("Cube\t\t=>\t c\n");
		printf("4th Power\t=>\t f\n");
		printf("5th Power\t=>\t i\n");
		printf("Percentage\t=>\t p\n");


		char opr;

		printf("\n\nEnter Operation Code : ");
		scanf(" %c",&opr);

		switch(opr)
		{
			case '+' :
				Addition();
				break;

			case '-' :
				Subtraction();
				break;

			
			case '*' :
				Multiplication();
				break;


			case '/' :
				Division();
				break;

				
			case '%' :
				Remainder();
				break;



			case 's' :
				Square();
				break;

			case 'c' :
				Cube();
				break;


			case 'f' :
				Fourth_Power();
				break;

			case 'i' :
				Fifth_Power();
				break;

			case 'p' :
				Percentage();
				break;
			

			default:
				printf("\nInvalid operation Code\n\n");
		}
	}


	else if(option == 2)
	{
		printf("\n\n\t\t **		Scientific Calculator 	**\n\n");
		printf("***** 	Click given short code to perform Different operations\n\n\n");

		printf("Operation\t\tShort Code\n\n");
		printf("N th Power\t=>\t n\n");
		printf("Factorial\t=>\t f\n");
		printf("Reverse\t\t=>\t r\n");

		char opr;

		printf("\n\nEnter Operation Code : ");
		scanf(" %c",&opr);

		switch(opr)
		{
			case 'n':
				N_Power();
				break;
			
			case 'f':
				Factorial();
				break;

			case 'r':

				Reverse();
				break;
			

			default :
				printf("\nInvalid operation code\n");

		}

	}


	else if(option == 3)
	{
		printf("\n\n\t\t **		Programmers Calculator 	**\n\n");
		printf("***** 	Click given short code to perform Different operations\n\n\n");

		printf("Operation\t\t\tShort Code\n\n");
		printf("Bitwise AND\t\t=>\t &\n");
		printf("Bitwise OR\t\t=>\t |\n");
		printf("Bitwise xOR\t\t=>\t ^\n");
		printf("Bitwise RightShift\t=>\t >\n");
		printf("Bitwise LeftShift\t=>\t <\n");
		printf("Bitwise NOT\t\t=>\t ~\n");
		printf("Decimal to Binary\t=>\t b\n");

		char opr;

		printf("\n\nEnter Operation Code : ");
		scanf(" %c",&opr);

		switch(opr)
		{
			case '&':
				Bitwise_AND();
				break;

			case '|':
				Bitwise_OR();
				break;

			case '^':
				Bitwise_xOR();
				break;

			case '>':
				Bitwise_Right_Shift();
				break;

			case '<':
				Bitwise_Left_Shift();
				break;

			case '~':
				Bitwise_NOT();
				break;

			case 'b':
				{
					int inum;
					printf("\nEnter the number : ");
					scanf("%d",&inum);

					Decimal_TO_Binary(inum);
					break;
				}


			default :
				printf("\nInvalid Operation Code\n");

		}

	}

}

