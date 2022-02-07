/* write a program to perform selection short on array of 10 mu,eric value
Date:25-Jan-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,p,swap;
	clrscr();
	printf("Enter number of element:___");
	scanf("%d",&n);
	printf("Enter %d Number:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[p]>a[j])
			p=j;
		}
		if(p!=i)
		{
			swap=a[i];
			a[i]=a[p];
			a[p]=swap;
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}