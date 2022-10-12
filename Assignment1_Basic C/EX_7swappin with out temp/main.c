/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	float a=0, b=0;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);
    fflush(stdout);
    printf("Enter value of b: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&b);
    a=a+b;   b=a-b;    a=a-b;
    printf("After swapping value of a =%f\n After swapping, value of b =%f",a,b);


}

