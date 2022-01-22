#include<stdio.h>
void matrix_multiplication();
void determinant();

int main()
{
		int a,b,Not,i,restart;
	l1:
	system("cls");
	printf("\t\t\t\tWElCOME TO My Own World\n");
	printf("\t\t\t=======================================\n\n");
	printf("\t\t1.Matrix_multiplication\n\t\t2.Determinant\n");
	
	printf("\n\n\t\tPress 1 or 2  :");
	scanf("%d",&i);
	system("cls");
	
	if(i==1)
	{
		matrix_multiplication();	
	}
	else if(i==2)
	{	
		determinant();
	}
		 	printf("\n\nEnter any key to continue.....");
	getch();
	system("cls");
	l2:
	 printf("\npress 1 to restart otherwise press 0 to exit: ");
		scanf("%d",&restart);
		if(restart==1)
		{
			goto l1;
		}
		else if(restart==0)
		{
			for(;;)
			{
				break;
			}
		}
		else
		{
			system("cls");
			goto l2;
		}
	 	
}
void matrix_multiplication()
{
	int a[5][5],b[5][5],c[5][5];
	int i,j,k;
	int row1,col1,row2,col2;
	printf("\nEnter the value of first matrix row :");
	scanf("%d",&row1);
	printf("\nEnter the value of first matrix col :");
	scanf("%d",&col1);
	
	printf("\nEnter the value of second matrix row :");
	scanf("%d3",&row2);
	printf("\nEnter the value of second matrix col :");
	scanf("%d",&col2);
	
	if(col1==row2)
	{
		printf("\n ___________________First Matrix______________________");
		
	 for(i=0;i<row1;i++)
	   {
	     for(j=0;j<col1;j++)	
	     {
	         
	     	printf("\nEnter the value of a [%d][%d] :",i,j);
	     	scanf("%d",&a[i][j]);
		 }	
				 
    	 printf("\n");
	   }
	for(i=0;i<row2;i++)
     {	
	   for(j=0;j<col2;j++)
	   {
	   	printf("%d\t",a [i][j]);
	   }
	   printf("\n");
	}
		
		printf("\n ___________________Second Matrix______________________");
		
	 for(i=0;i<row2;i++)
	   {
	     for(j=0;j<col2;j++)	
	     {
	     	printf("\nEnter the value of b [%d][%d] :",i,j);
	     	scanf("%d",&b[i][j]);
		 }
		 printf("\n");
	   }
	 for(i=0;i<row2;i++)
     {	
	   for(j=0;j<col2;j++)
	   {
	   	printf("%d\t",b [i][j]);
	   }
	   printf("\n");
	}
	// multiplication
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			c[i][j]=0;
			for(k=0;k<row1;k++)
			{
			 c[i][j]+= a[i][k]*b[k][j];
			}
		}
	}
		
     printf("___________________Matrix Multiplication result______________________\n");
	
		
	for(i=0;i<row2;i++)
	   {
	     for(j=0;j<col2;j++)	
	     {
	     	printf("%d\t", c[i][j]);
		 }
		 printf("\n");
       }
	   
	 
   }
 }

//determinant

void determinant()
{

	int a[3][3],i,j,det;
	int row1,col1;
	printf("\nEnter the value of first matrix row :");
	scanf("%d",&row1);
	printf("\nEnter the value of first matrix col :");
	scanf("%d",&col1);
	

if(row1==col1)
	{
		printf("\n ___________________First Matrix______________________");
		
	 for(i=0;i<3;i++)
	   {
	     for(j=0;j<3;j++)	
	     {
	         
	     	printf("\nEnter the value of a [%d][%d] :",i,j);
	     	scanf("%d",&a[i][j]);
		 }	
			printf("\n");	 
	   }
	   printf("================================================================\n");
	for(i=0;i<3;i++)
     {	
	   for(j=0;j<3;j++)
	   {
	   	printf("%d\t",a [i][j]);
	   }
	   printf("\n");
     }
     printf("\n================================================================\n\n");
 }
 	printf("\n================================================================\n");
 	
 	
	   	det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]) + a[0][1]*(a[1][2]*a[2][0]-a[1][0]*a[2][2]) +  a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
	printf("\nDet|A| = %d", det);
	
	
	printf("\n================================================================");
	 

	 }

