#include <stdio.h>
#include<stdlib.h>
void fs();
void atoi1();
void atof2();
void atol3();
void strtod4();
void strtol5();
void abort6();
void another_time();
int main()
{
	int check;
	
		 	system("cls");
		fs();
	system("cls");
	printf("\n\n\t1. atoi():ASCII to Integer\n\t2. atof():ASCII to Float\n\t3. atoi():ASCII to Long\n\t4. strtod():String to Double\n\t5. strtol():String to Long\n\t6. abort():Abnormally terninated the program\n\t7. atexit():At normal program termination\n");
	
	printf("\n\n\t\tPress  :");
	scanf("%d",&check);
	system("cls");
	
	if(check==1)
	{
		atoi1();
		sleep(2);
		another_time();
		system("cls");
	}
	else if(check==2)
	{
		atof2();
		sleep(2);
		another_time();
		system("cls");
	}
	
	else if(check==3)
	{
		atol3();
		sleep(2);
		another_time();
		system("cls");
	}
	
	else if(check==4)
	{
		 strtod4();
		sleep(2);
		another_time();
		system("cls");
	}
		else if(check==5)
	{
		strtol5();
		sleep(2);
		another_time();
		system("cls");
	}
		else if(check==6)
	{
		abort6();
		sleep(2);
		another_time();
		system("cls");
	}
	else
	{
		printf("\n\n\t\t\tinvalid");
		sleep(2);
		another_time();
		system("cls");
	
	}
}

void atoi1()
{
	int i;
	printf("\n\n\t\t atoi():ASCII to Integer\n\n");
    printf("\t") ;
   	for( i=1;i<=15;i++)       		
		{
			printf("===",i);
			Sleep(75);
		}	
	
	char ch[]="38";
	int x;
	x=atoi(ch);
	printf("\n\n\t\tString convert to Integer :%d\n\n",x);

}            
void atof2()
{
	int i;
	printf("\n\n\t\t atoi():ASCII to Float\n\n");
    printf("\t") ;
   	for( i=1;i<=15;i++)       		
		{
			printf("===",i);
			Sleep(75);
		}

	char ch[]="38.35";
	float x;
	x=atof(ch);
	printf("\n\n\t\tString convert to Float :%f\n\n",x);

}
void atol3()
{
	int i;
	printf("\n\n\t\t atoi():ASCII to Long\n\n");

    printf("\t") ;
   	for( i=1;i<=15;i++)       		
		{
			printf("===",i);
			Sleep(75);
		}
		
	char ch[]="99326038";
	long x;
	x=atol(ch);
	printf("\n\n\t\tString convert to Long :%ld\n\n",x);

}
void strtod4()
{
	int i;
	printf("\n\n\t\t strtod():String to Double\n\n");
	
    printf("\t") ;
   	for( i=1;i<=15;i++)       		
		{
			printf("===",i);
			Sleep(75);
		}

	char ch[]="99.32Hi123";
	float x;
	char *ptr;
	
	x=strtod(ch,&ptr);
	
	printf("\n\n\t\tFloating Value :%f",x);
	printf("\n\t\tRemaining Value :%s\n\n",ptr);

}
void strtol5()//*****
{
	int i;
	printf("\n\n\t\t strtol():String to Long Integer\n\n");
	
	    printf("\t") ;
       	for(i=1;i<=15;i++)       		
			{
				printf("===",i);
				Sleep(75);
			}

	char ch[]="993260Hello";
	long x;
	char *ptr;
	
	x=strtol(ch,&ptr,10);
	
	printf("\n\n\t\t Long Integer Value :%ld",x);
	printf("\n\t\tRemaining Value :%s\n\n",ptr);
}
void abort6()
{
	int i;
	printf("\n\n\t\t abort():Abnormally terninated the program");
	printf("\n\t\t exit(0):Normally terninated the program\n");
	
		    printf("\t") ;
       		for( i=1;i<=20;i++)       		
			{
				printf("===",i);
				Sleep(75);
			}

	{
		printf("\n\n\t\tHi Programmers\n");
		abort();
		printf("\n\n\t\tGood Morning\n\n");

	}
}	 	

void another_time()

{
	int another;
	printf("\nPress 1 to restart otherwise press 0 to exit: ");
	scanf("%d",&another);

   			
		if(another==1)
		{
    		 main();
		}
 	   else
		{
    		exit(0);     			 
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
