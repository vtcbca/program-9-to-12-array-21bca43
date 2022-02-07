/* Write a program to print following pattern
 *
 * *
 * * *
 * * * *
 * * * * *
Date:25-Jan-2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}