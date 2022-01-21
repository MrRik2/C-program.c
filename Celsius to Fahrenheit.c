
#include <stdio.h> 
int main()
{	

	float celsius,fahrenheit;
	
	printf("Enter celsius to convret Fahrenheit  :");
	scanf("%f",&celsius);

	fahrenheit=(celsius*1.8)+32;
	
	printf("%.2f Celsius  = %.2f Fahrenheit",celsius,fahrenheit);
}
