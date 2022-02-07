/* Write a program to perform bubble short on array of 10 numeric value
Date:25-Jan-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter a value of a element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	getch();
}