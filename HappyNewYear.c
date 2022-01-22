#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    char name[50];
    int hour=11, minute=59, second=55;
    int HH,MM,SS,i;
 
   	printf("\n\n");

        
    while(1){
    
    system("CLS");    	


        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t");
        printf("HH : MM : SS\n\t\t\t\t\t\t\t");
        printf("%.2d : %.2d : %.2d", hour, minute, second);
      
        second++;

        if(second==60)
		{
            minute = minute + 1;
            second = 0;
        
        }

        if(minute == 60)
		{

            hour = hour + 1;
            minute = 0;
        }

         if(hour == 24 )
		{
            hour = hour +1;
        }
       
        sleep(1);
		
		if(hour==12&&minute==00&&second==00)
		
	
{
	system("cls");

 int i;
 
 
	printf("\n");
	for(i=0;i<=59;i++)
	{
		printf("-=",i);
		Sleep(5);
	}
		printf("\n");
	for(i=0;i<=59;i++)
	{
		printf("-=",i);
		Sleep(5);
	}

	Sleep(50);
	printf("\n");

	{
		printf("\t\t\t\tCreated\t");
		Sleep(1000);
	}
	{
		printf("By\t");
		Sleep(500);
	}
		{
		printf("Mr Rik\t\n");
		Sleep(500);
	}
	
		printf("\n");
	for(i=0;i<=59;i++)
	{
		printf("-=",i);
		Sleep(5);
	}
	
		printf("\n");
	for(i=0;i<=59;i++)
	{
		printf("-=",i);
		Sleep(5);
	}

	printf("\n\n\n\n");
	
	sleep(1);
	system("cls");
	
sleep(2);

system("color 6");	
printf("\nHH         HH    AAAAAAAAA     PPPPPPPPP     PPPPPPPPP     YY         YY");
sleep(1);
system("color 1");
printf("\nHH         HH   AA       AA   PP       PP   PP       PP     YY      YY");
sleep(1);
system("color 2");
printf("\nHH         HH   AA       AA   PP       PP   PP       PP       YY  YY");
sleep(1);
system("color 3");
printf("\nHHHHHHHHHHHHH   AAAAAAAAAAA   PPPPPPPPPPP   PPPPPPPPPPP         YY  ");
sleep(1);
system("color 4");
printf("\nHH         HH   AA       AA   PP            PP                  YY");
sleep(1);
system("color 5");
printf("\nHH         HH   AA       AA   PP            PP                  YY");
sleep(1);
system("color 6");
printf("\nHH         HH   AA       AA   PP            PP                  YY");
sleep(2);



printf("\n\n");
printf("\nNN            NN   EEEEEEEEEEEEEEEE    WW              WW   ");
sleep(1);
system("color 3");
printf("\nNN NN         NN     EE                WW              WW   ");
sleep(1);
system("color 4");
printf("\nNN   NN       NN     EE                WW              WW  ");
sleep(1);
system("color 5");
printf("\nNN     NN     NN     EEEEEEEEEEEEE     WW     WWW      WW     ");
sleep(1);
system("color 6");
printf("\nNN      NN    NN     EE                WW    WW  WW    WW   ");
sleep(1);
system("color 5");
printf("\nNN        NN  NN     EE                WW  WW     WW   WW        ");
sleep(1);
system("color 4");
printf("\nNN         NN NN   EEEEEEEEEEEEEEEE    WW WW        WW WW       ");
sleep(2);
system("color 3");


     printf("\n\n\t\n\t\t");
printf("\n  YY       YY   EEEEEEEEEEEEEEEE    AAAAAAAAA   RRRRRRRRRRRRR     ");
sleep(1);
system("color 1");
printf("\n    YY    YY      EE               AA       AA   RR        RR");
sleep(1);
system("color 2");
printf("\n     YY YY        EE               AA       AA   RR        RR    ");
sleep(1);
system("color 3");
printf("\n      YY         EEEEEEEEEEEEE     AAAAAAAAAAA   RRRRRRRRRRR     ");
sleep(1);
system("color 4");
printf("\n      YY          EE               AA       AA   RR   RR        ");
sleep(1);
system("color 5");
printf("\n      YY          EE               AA       AA   RR      RR      ");
sleep(1);
system("color 6");
printf("\n      YY        EEEEEEEEEEEEEEEE   AA       AA   RR        RR " );
system("color 3");
sleep(2);


system("cls");
system("color 7");
printf("\n\n\n\n\n\n  ");
printf("\t\t\t\t\t\tBYE BYE  ");
sleep(1);
printf("2021  \n");
sleep(2);
system("cls");
sleep(3);
printf("\n\n\n\n\n\n  ");

	for(i=0;i<=10;i++)
	{
		printf("==========",i);
		Sleep(1);
	}
sleep(1);
printf("\n\n");
printf("\t\t\t\t\t\tW");
sleep(1);
printf("E");
sleep(1);
printf("L");
sleep(1);
printf("C");
sleep(1);
printf("O");
sleep(1);
printf("M");
sleep(1);
printf("E\n");

   for(i=0;i<=10;i++)
    {
		printf("==========",i);
		Sleep(1);
	}
	sleep(1);
	system("color 0f");

printf("\n\n\n\n  ");

sleep(1);
system("color 6");	
printf("\t\n\t\t\t   222222       0000000000   222222      222222           ");
printf("\t\n\t\t\t  22    22      00      00  22    22    22    22          ");
sleep(1);
system("color 5");
printf("\t\n\t\t\t       22       00      00       22           22      ");
printf("\t\n\t\t\t      22        00      00      22           22     ");
sleep(1);
system("color 6");
printf("\t\n\t\t\t    22          00      00    22           22    ");
printf("\t\n\t\t\t  2222222222    0000000000  2222222222   2222222222  ");

sleep(1);
system("color 6");
printf("\n\n  ");
printf("\tA New");
sleep(1);
printf(" Year is");
sleep(1);
printf(" like a");
sleep(1);
printf(" blank book");
sleep(1);
printf(" with the pen");
sleep(1);
printf(" in your hands.");
sleep(1);
printf(" So, write");
sleep(1);
printf(" a beautiful");
sleep(1);
printf(" story for yourself");
sleep(1);
printf(" \n\tand see the");
sleep(1);
printf(" magic happen.");
sleep(1);
printf(" Wishing you");
sleep(1);
printf(" a very Happy");
sleep(1);
printf(" New Years!!");
sleep(5);

printf("\n\n\n");


 break;    
}
}
    return 0;

}

			
