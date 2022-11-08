/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int sum_digits(int num)
{
int x,sum=0;
while(num!=0)
{
	x = num % 10;
	sum += x;
	num /= 10;
}
return sum;
}
int main(){
	int num;
	printf("Enter number to sum its digits: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	printf("the sum of digits = %d ", sum_digits(num));
	return 0;
}

