#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i,n;
    

    	printf("\n\n\tHow Many Students Information You Want :");
	scanf("%d",&n);
    system("cls");
    printf("\n\n\t\t\tEnter Information For Students");
    printf("\n\t\t===============================================\n\n");
      
        //adding information
    for (i = 0; i < n  ; ++i)
	 {
        s[i].roll = i + 1;
        printf("\nFor Roll Number :%d\n", s[i].roll);
        printf("Enter First Name: ");
        scanf("%s", s[i].firstName);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n\n============================  Displaying Information  ============================\n\n");

    // displaying information
    for (i = 0; i < n; ++i)
	 {
        printf("\nRoll Number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
