/* Write a progrm to print following pattern
   * * * * *
     * * *
       *
Date:25-Jan-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int row,i,j,sp;
	clrscr();
	printf("Enter the number of row:");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(sp=0;sp<row-i;sp++)
		{
			printf(" ");
		}
		for(j=i;j<=2*i-1;j++)
		{
			printf("* ");
		}
		i--;
		printf("\n");
	}
	getch();
}