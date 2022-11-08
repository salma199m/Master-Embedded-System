/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
#include<math.h>
float square_root(float num)
{
	return pow(num,0.5);
}
int main()
{
	int num;
	printf("Enter an integer number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &num);

	printf("square root of %d is %.3f", num, square_root(num));
}
