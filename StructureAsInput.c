// Achint Sathoo 1/4/2021
// Purpose: Take strcture as input
#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int rollNo
	char name[10];
};

int main()
{
	struct Student stud2;
	
	printf("Enter your roll number: ")};
	scanf("%d", &stud2.rollNo);
	
	printf("Enter your name: \n");
	scand("%d", &stud2.name);
	
	printf("Roll number is: %d\nName is:", stud2.rollNo, stud2.name);
}
return 0;