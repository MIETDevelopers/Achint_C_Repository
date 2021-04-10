//Author: Achint Sathoo
//Creation Date: 03-04-21
//Purpose: To create a C program for reading and writing text files.
#include <stdio.h>
#include <stdlib.h>
struct s {
	char text[1000]; //Making a user defined data type using structures.
	};
 int main(){
	struct s a[1000],b[1000];
	FILE *fptr;
	int i;
	fptr=fopen("E:\\Softwares\\C_Programs\\Achint_C_Repository\\ReadWriteFile.txt","wb"); //Locating the file and opening it.
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //Using gets function to scan the entered text.
	}
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("E:\\Softwares\\C_Programs\\Achint_C_Repository\"ReadWriteFile.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); //Using printf function to print the entered text.
	}
	fclose(fptr);
}
