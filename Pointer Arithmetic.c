
#include <stdio.h> 
#include<windows.h>

	void another_time();
		void another_time()
	{
			char another,y,n;
			printf("\n\nWanted to do another time(y/n)  :");
 			scanf("%d",&another);
   			
  			if(another==y)
			{
    			 main();
			}
 		   else
			{
     			 return 0;     			 
			}

	}
int main() 

{   	
	char i;

	printf("\t\tAddition press (+)\n\t\tSubtraction press (-)\n\t\tMultiplication press (*)\n\t\tDivision press (/)");
	
	
	printf("\n\n\t\tPress Wanted Operator  ");
	scanf("%c",&i);

if(i=='+')
	{
		int _1stno, _2ndno, *ptr1, *ptr2, add;

	printf("\n\n Enter the first number: "); 
	scanf("%d", &_1stno);
	printf("Enter the second number: ");
	scanf("%d", &_2ndno);
	
	ptr1= &_1stno;
	ptr2= &_2ndno; 
	
	add=*ptr1 + *ptr2;
	printf("Addition of two number :%d",add);
	
   another_time();
	}
else if(i=='-')
	{
		int _1stno, _2ndno, *ptr1, *ptr2, sub;

	printf("\n\n Enter the first number: "); 
	scanf("%d", &_1stno);
	printf("Enter the second number: ");
	scanf("%d", &_2ndno);
	
	ptr1= &_1stno;
	ptr2= &_2ndno; 
	
	sub=*ptr1 - *ptr2;
	printf("Subtraction of two number :%d",sub);
	
	another_time();
    }
else if(i=='*')
	{
		int _1stno, _2ndno, *ptr1, *ptr2, mul;

	printf("\n\n Enter the first number: "); 
	scanf("%d", &_1stno);
	printf("Enter the second number: ");
	scanf("%d", &_2ndno);
	
	ptr1= &_1stno;
	ptr2= &_2ndno; 
	
	mul=*ptr1 * *ptr2;
	printf("Multiplication of two number :%d",mul);
	
    another_time(); 
	}
else if(i=='/')
	{
		float _1stno, _2ndno, *ptr1, *ptr2,div;

	printf("\n\n Enter the first number: "); 
	scanf("%d", &_1stno);
	printf("Enter the second number: ");
	scanf("%d", &_2ndno);
	
	ptr1= &_1stno;
	ptr2= &_2ndno; 
	
	div=*ptr1 / *ptr2 ;
	printf("Division of two number :%.2f",div);
	 
	another_time();
	}
else if (i!='+','-','*','/')
	{
		system("cls");
		Beep(750,1000);
		printf("\n\n\t\t\t!!!PLEASE ENTER A VALID OPTION!!!\n");
		Sleep(1500);
		system("cls");
			main();
	}

}
