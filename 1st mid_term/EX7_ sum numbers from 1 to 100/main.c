/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
void sum(int n)
{
int x,y,z;
x=n+1;
y=x*n;
z=y/2;
printf("result= %d",z);
}
int main()
{
	int num;
	printf("Enter number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	sum(num);
}
