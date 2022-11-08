/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>

int fact(int num)
{
	if(num!=1)
		return num*fact(num-1);
}

int main()
{
	int no;
	printf("Enter positive integer:");

	fflush(stdin);
	fflush(stdout);

	scanf("%d",&no);

	fflush(stdin);
	fflush(stdout);

	printf("factorial of %d = %d ",no, fact(no));
	return 0;
}
