/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int binary(int num)
{
	int count=0;
	if(num==0)
		return 0;
	else {
		while(num>0)
		{
			if(num & 1)
				count++;
			num = num >>1;
		}
	}
	return count;
}
int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	printf("number of ones is: %d ",binary(num));
}
