#include <stdio.h>
void fs();
int main()
{
	int year;
	char another;
	char y,n;
	system("cls");
	fs();
	sleep(1);
	system("cls");

printf("\n\n\t\t    Leap Year checker");
printf("\n\t\t========================");
printf("\n\n\tEnter Year :");
scanf("%d",&year);

 if((year%4==0)&&(year%100!=0)||(year%400==0))
  {
    printf("\n\n\t%d is leap year",year);
  }
 else 
  {
    printf("\n\n\t%d is not a leap year",year);
  }

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
		printf("M");
		Sleep(75);
		printf("Y");
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

