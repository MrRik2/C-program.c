#include<stdio.h>

enum boolean
{
	false,true
};
enum boolean isEven(int x)
{
	if(x%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int x,another;
	enum boolean result;
	printf("\n\n\t\t\tEnter a Number  :");
	scanf("%d",&x);
	result=isEven(x);
	if(result==true)
	{
		printf("\n\n\t\t\tNumber is Even");
	}
	else
	{
		printf("\n\n\t\t\tNumber is Odd");
	}
sleep(2);
  system("cls");
	printf("\nPress 1 to Check another otherwise press 0 to exit: ");
		scanf("%d",&another);
		if(another==1)
		{	
			system("cls");
			main();
		}
		else if(another==0)
		{
			for(;;)
			{
				break;
			}
		}
		else
		{
			system("cls");
			
		}
	}
