#include<stdio.h>
main()
{
	char name[50],school[50],course[50];
	int standard;
	FILE *fp;
	fp=fopen("data.html","w");
	
	printf("enter your name :");
	scanf(" %[^\n]s",name);
	printf("enter your standard :");
	scanf(" %d",&standard);
	printf("enter your school name :");
	scanf(" %[^\n]s",school);
	printf("enter your course :");
	scanf(" %[^\n]s",course);
	
	printf("\n\nName : %s\n",name);
	printf("Standard : %d\n",standard);
	printf("Course : %s\n",course);
	printf("School Name : %s\n",school);
	
	fprintf(fp,"<html>");
	
	fprintf(fp,"<head>");
	
	fprintf(fp,"<title>Basic Information</title>");
	
	fprintf(fp,"</head>");
	
	fprintf(fp,"<body>");
	fprintf(fp,"%s","<h1><center>Basic Information</center></h1>");
	fprintf(fp,"\n\n<h3>Name : %s</h3>",name);
	fprintf(fp,"\n\n<h3>Standard : %d</h3>",standard);
	fprintf(fp,"\n\n<h3>Course : %s</h3>",course);
	fprintf(fp,"\n\n<h3>School Name : %s</h3>",school);
	fprintf(fp,"</body>");
	
	fprintf(fp,"</html>");
}