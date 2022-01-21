
#include<stdio.h>
int main()
{
	int arr[20],maximum,minimum,n,i;
	
	printf("\n\nHow many elements you want to input :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter any value :");
		scanf("%d",&arr[i]);
	}
	maximum = minimum = arr[0];
	for(i=1;i<n;i++)
{
	
	if(maximum <   arr[i] )
	
		maximum = arr[i];
		
	if(minimum >  arr[i] )
	
		minimum = arr[i];
	}
	printf("\n\nMaximum element is = %d",maximum);
	printf("\n\nMinimum element is = %d",minimum);
}
