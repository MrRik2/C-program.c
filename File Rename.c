#include<stdio.h>
#include<conio.h>
int main()
{
	if(rename("abc.txt","Mr_Rik")==0)
	{
		printf("File Rename Successful");
	}
	else
	{
		printf("Error While Renamint The File");
	}
	return 0;
}

