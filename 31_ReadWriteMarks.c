//Author: Achint Sathoo
//Creation Date: 03-04-21
//Purpose: To create a C program for reading and writing the student marks data to files.
#include <stdio.h>
#include <stdlib.h>
struct s {    //Making a data type that is user defined using structures.
	char name[50];
	int RollNo;
	int Marks;
};
int main() {
	struct s a[10],b[10];
	FILE *fptr;
	int i;
	fptr=fopen("E:\\Softwares\\C_Programs\\Achint_C_Repository\\ReadWriteMarks.txt","wb"); //Locating the file and opening it
	for (i=0;i<1;++i) {
		fflush(stdin);
		//Using gets and printf function scanning the entered Values.
		printf("Enter Name: ");
		gets(a[i].name);
		printf("Enter Roll Number: ");
		scanf("%d",&a[i].RollNo);
		printf("Enter Marks: ");
		scanf("%d",&a[i].Marks);
	}
