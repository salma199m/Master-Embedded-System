/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main ()
{
	int x=0 , sum =0;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	for (int i=0; i<=x; i++){
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}

