#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
	int age;
	long long int idno;
	char Name[50];
	char Gen;
	struct DOB
	{
		int date,month,year;
	}D;
}S;
int main()
{
	printf("enter age\n");
	scanf("%d",&S.age);
	printf("enter idno\n");
	scanf("%lld",&S.idno);
	fflush(stdin);
	puts("enter name\n");
	gets(S.Name);
	printf("enter gen\n");
	scanf("%c",&S.Gen);
	printf("enter date \n");
	scanf("%d",&S.D.date);
	printf("enter month\n");
	scanf("%d",&S.D.month);
	printf("enter year \n");
	scanf("%d",&S.D.year);
	
		printf("AGE = %d\n",S.age);
		printf("ID = %lld\n",S.idno);
		puts(S.Name);
		printf("Gender = %c\n",S.Gen);
		printf("Date Of Birth = %d/%d/%d",S.D.date,S.D.month,S.D.year);

}