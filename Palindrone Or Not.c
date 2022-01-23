
#include<stdio.h>
#include<string.h>
void number();
void string();
void restart();
void fs();
int main()
{
	int check;
	fs();
	sleep(1);
	system("cls");
	
	printf("\n\n\t\t\tCheking Palindrone or Not");
	printf("\n\t\t========================================");
	
	printf("\n\n\tCheking For Number Press 1\n\tCheking For String Press 2\n");
    printf("\n\n\tPress Here  :");
	scanf("%d",&check);
    
    system("cls");
    
    if(check==1)
    {
    	number();
	}
	else if(check==2)
	{
		string();
	}
	else
	{
		printf("\n\n\t\t\tEnter Valid Option...\n\n");
		sleep(2);
		restart();
	}
}
	
  void number()	
  {
	int num,reverse=0,remainder,original;
	
	printf("\n\n\t\t\tEnter a number : ");
	scanf("%d",&num);
	printf("\n\t\t====================================\n\n");
	original=num;
	while(num >0)
	{
		remainder=num%10;
		reverse=(reverse*10)+remainder;
		num=num/10;
	}
	if(original==reverse)
	{
		printf("\n\t\tGiven number is Palindrone...\n\n");
		
	}
	else
	{
		printf("\n\t\tGiven number is not Palindrone...\n\n");
	}
	sleep(2);
   restart();
}

  void string()
  {
	char str1[30],str2[30];
	printf("\n\n\t\t\tEnter a String   :");
	scanf("%s",&str1);
	printf("\n\t\t====================================\n\n");
	strcpy(str2,str1);
	strrev(str1);
	
		if(strcmp(str1,str2)==0)
		{
			printf("\n\t\tGiven String is Palindrone...\n\n");
		}
		else
		{
			printf("\n\t\tGiven String is not Palindrone...\n\n");
		}
		sleep(2);
  		 restart();
	}
	void restart()
	{
		int restart;
		printf("\npress 1 to restart otherwise press 0 to exit: ");
		scanf("%d",&restart);
		system("cls");
		if(restart==1)
		{
			main();
		}
		else
		{
			;
		}
	}

void fs()
	{
	
		printf("\n\t\t\t\t");
		printf("W");
		Sleep(75);
		printf("E");
		Sleep(75);
		printf("L");
		Sleep(75);
		printf("C");
		Sleep(75);
		printf("O");
		Sleep(75);
		printf("M");
		Sleep(75);
		printf("E");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("T");
		Sleep(75);
		printf("O");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("O");
		Sleep(75);
		printf("W");
		Sleep(75);
		printf("N");
		Sleep(75);
		printf(" ");
		Sleep(75);
		printf("W");
		Sleep(75);
		printf("O");
		Sleep(75);
		printf("U");
		Sleep(75);
		printf("L");
		Sleep(75);
		printf("D");
		Sleep(75);
		printf("\n\n\t\t\t\t\t");
		printf("C");
		Sleep(75);
		printf("r");
		Sleep(75);
		printf("e");
		Sleep(75);
		printf("a");
		Sleep(75);
		printf("t");
		Sleep(100);
		printf("e");
		Sleep(100);
		printf("d");
		Sleep(100);
		printf(" ");
		Sleep(100);
		printf("B");
		Sleep(100);
		printf("y");
		Sleep(100);
		printf(" ");
		Sleep(100);
		printf("M");
		Sleep(100);
		printf("r");
		Sleep(100);
		printf("_");
		Sleep(100);
		printf("R");
		Sleep(100);
		printf("I");
		Sleep(100);
		printf("K");
		Sleep(100);
	}

