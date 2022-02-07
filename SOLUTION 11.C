/*Write a program to enter any string and find and print the total
number of vowels in it
Input:Om sai RAM
output:
Inputted string is:Om sai RAM
vowels:O,a,i,A
total vowel:4
Date:25-Jan-2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char line[20];
	int vowels,i;
	vowels=0;
	clrscr();
	printf("Enter a line of string:");
	gets(line);
	for(i=0;i<strlen(line);i++)
	{
		if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='0'||line[i]=='u');
		{
			vowels++;
			printf("%c",line[i]);
		}
	}
	printf("\n Number of vowels is in the string:%d",vowels);
	printf("\n");
	getch();
}
