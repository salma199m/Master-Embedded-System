/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
    fflush(stdout);
	printf("Enter value of b:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	temp= a;   a= b;   b= temp;
	printf("After swapping value of a =%0.2f\n After swapping value of b =%0.2f\n",a,b);
	return 0;
}

