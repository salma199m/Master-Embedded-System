/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	char character;
	printf("Enter a character:");
	fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character, character);
	return 0;
}

