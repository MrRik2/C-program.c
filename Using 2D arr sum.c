#include<stdio.h>
#include<string.h>
int main()
{
	char a[3][3],b[3][3],sum[3][3];
	int i,j;
	
	printf("\nEnter value for first 2D array :\n\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter value for a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	   system("cls");
	printf("\nEnter value for second 2D array :\n\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter value for b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	system("cls");
	printf("Values of first 2D array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}	
	
	printf("\n\n\nValues of second 2D array :\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
	
	printf("\n\nSum of first and second 2D array\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}	
	return 0;
} 
