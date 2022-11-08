/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>

int exp(int base, int power)
{
	if(power != 0)
		return (base*exp(base, power-1));
	else
		return 1;
}
int main()
{
	int b,p;
	printf("Enter base number: ");

	fflush(stdin);
	fflush(stdout);

	scanf("%d",&b);

	fflush(stdin);
	fflush(stdout);

	printf("Enter power number: ");

	fflush(stdin);
	fflush(stdout);

	scanf("%d",&p);

	fflush(stdin);
	fflush(stdout);

	printf("%d^%d = %d ",b,p,exp(b,p));
	return 0;

}
