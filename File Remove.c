#include<stdio.h>
#include<conio.h>
int main()
{
	if(remove("Mr_Rik.txt")==0)
	{
		printf("File Deleted Successful");
	}
	else
	{
		printf("Error While Deleting The File");
	}
	return 0;
}

