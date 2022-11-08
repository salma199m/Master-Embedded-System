/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
void reverse_digits(int num)
{
	int x,rev=0;
	while(num!=0)
	{
	x =num%10;
	rev = rev*10 + x;
	num/=10;
	}
	printf("number after reverse is %d",rev);
}
int main()
{
	int num;
	printf("Enter a number to sum it digits: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	reverse_digits(num);
}

