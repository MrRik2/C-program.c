#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
void fs();

int main(){
    char name[50];
    int hour, minute, second,i;
    int HH,MM,SS;
 
    hour = minute = second = 0;
    
	fs();
	sleep(1);
	system("cls");


  	 	printf("\n\n");	          
        printf("\tEnter Friend Name  : ");
         
        scanf("%s",name); 
            
			printf("\n");     
       		for(i=1;i<=13;i++)
		{
			printf("===",i);
			Sleep(75);
		}
		  
        printf("\n\n\tEnter Wishing Time  \n");
       		for(i=1;i<=13;i++)
		{
			printf("===",i);
			Sleep(75);
		}
        printf("\n\nHH:MM:SS\n");
        scanf("%d %d %d",&hour,&minute,&second);
        
        
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

         if(hour == 12 )
		{
            hour = 0;
        }
       
        sleep(1);
		
		if(hour==00&&minute==00&&second==05)
		
		
{
	system("cls");
		printf("\n\n\t");
		for(i=1;i<=20;i++)
	
	{
		printf("=====",i);
		Sleep(75);
	}
	
Sleep(150);
printf("\n\t\t\t\tBLESS ");
Sleep(150);
printf("YOU ");
Sleep(150);
printf("& ");
Sleep(150);
printf("ALL ");
Sleep(150);
printf("YOUR ");
Sleep(150);
printf("DESIRES ");
Sleep(150);
printf("COMES ");
Sleep(150);
printf("TRUE \n ");
Sleep(150);
sleep(1);
Sleep(150);
printf("\n\t\t\t\tMANY ");
Sleep(150);
printf("MANY ");
Sleep(150);
printf("HAPPY ");
Sleep(150);
printf("RETURNS ");
Sleep(150);
printf("OF ");
Sleep(150);
printf("THE ");
Sleep(150);
printf("DAY \n");
Sleep(150);
sleep(1);

Sleep(150);
printf("\n\t\t\t\tENJOY ");
Sleep(150);
printf("YOUR ");
Sleep(150);
printf("SPECIAL ");
Sleep(150);
printf("DAY \t");
Sleep(150);
puts(name);
sleep(1);
		printf("\n\n\t");
		for(i=1;i<=20;i++)
	
	{
		printf("=====",i);
		Sleep(75);
	}
	sleep(2);	
	system("cls");
	system("color 6");		
printf("\n\n\n\n");
system("color 1");
printf("\nHH         HH    AAAAAAAAA     PPPPPPPPP     PPPPPPPPP     YY          YY");
printf("\nHH         HH   AA       AA   PP       PP   PP       PP     YY        YY");
sleep(1);
printf("\nHH         HH   AA       AA   PP       PP   PP       PP       YY    YY");
printf("\nHHHHHHHHHHHHH   AAAAAAAAAAA   PPPPPPPPPPP   PPPPPPPPPPP          YY  ");
sleep(1);
printf("\nHH         HH   AA       AA   PP            PP                   YY");
printf("\nHH         HH   AA       AA   PP            PP                   YY");
printf("\nHH         HH   AA       AA   PP            PP                   YY");
sleep(2);



printf("\n\n");
printf("\nBBBBBBBBBBB     IIIIIIIIIIIII    RRRRRRRRRRR   TTTTTTTTTTTTTTTT      HH         HH");
printf("\nBB         BB        II          RR        RR         TT             HH         HH");
sleep(1);
printf("\nBB         BB        II          RR        RR         TT             HH         HH");
printf("\nBBBBBBBBBBB          II          RRRRRRRRRRR          TT             HHHHHHHHHHHHH");
sleep(1);
printf("\nBB         BB        II          RR RRR               TT             HH         HH");
printf("\nBB         BB        II          RR    RR             TT             HH         HH");
printf("\nBBBBBBBBBBB     IIIIIIIIIIIII    RR       RR          TT             HH         HH");
sleep(2);
	

      printf("\n\n\t\n\t\t");

printf("\n DDDDDDDDD    \t AAAAA \t YY       YY");
printf("\n   DD     DD\tAA   AA	   YY    YY    ");
sleep(1);
printf("\n   DD     DD\tAA   AA	    YY  YY       ");
printf("\n   DD     DD\tAA   AA	      YY       ");
sleep(1);
printf("\n   DD     DD\tAAAAAAA       YY       ");
printf("\n   DD     DD\tAA   AA       YY       ");
printf("\n DDDDDDDDD  \tAA   AA	      YY       " );
sleep(2);

      system("color 3");
	printf("\t\n\t\t\t\t\t\t\t\t    Dear  %s   \n",name);
printf("\t\n\t\t\t\t\t\t\t\t   Make ");
Sleep(150);
printf("every ");
Sleep(150);
printf("day ");
Sleep(150);
printf("of ");
Sleep(150);
printf("life ");
Sleep(150);
printf("and \n");
Sleep(150);
printf("\t\n\t\t\t\t\t\t\t\t   every ");
printf("candle ");
Sleep(150);
printf("count .");
Sleep(150);
printf(" you ");
Sleep(150);
printf("are ");
Sleep(150);
printf("and ");
Sleep(150);
printf("worth ");
Sleep(150);
printf("it .\n");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t  Happiest ");
Sleep(150);
printf("of .");
Sleep(150);
printf("birthdays ");
Sleep(150);
printf("to ");
Sleep(150);
printf("you .\n");
Sleep(150);
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t   best ");
Sleep(150);
printf("year ");
Sleep(150);
printf("ever ! \n");
Sleep(150);
sleep(2);



printf("\t\n\t\t\t\t\t\t\t\t                 ^        ");
printf("\t\n\t\t\t\t\t\t\t\t                | |        ");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t           =============     ");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t           |   HAPPY   |        ");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t         ==================     ");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t         |     BIRTH      |");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t       =====================     ");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t       |       DAY        |    ");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t    ==========================");
sleep(1);
printf("\t\n\t\t\t\t\t\t\t\t    |        %s           |",name);
printf("\t\n\t\t\t\t\t\t\t\t   =============================\n\n");
sleep(2);
 

printf("\t\n\t^" "\t^"  "\t^" "\t^"  "\t^" "\t^"  "\t^" "\t^"  "\t^" "\t^"  "\t^" "\t^"  "\t^" "\t^"  "\t^" );
printf("\t\n\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==");
printf("\t\n\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==");
printf("\t\n\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==");
printf("\t\n\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==");
printf("\t\n\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==");
printf("\t\n\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==" "\t==");
sleep(1);

printf("\n  ==================================================================================================================\n");
printf("\n  ==================================================================================================================\n");
break;

}
}

    return 0;
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
			
			
