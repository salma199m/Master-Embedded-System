/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	char text[100];
	int i, length;
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);

	for(i=0; text[i]!='\0'; i++){
		length =i;
	}
		printf("length of string: %d",length+1);
	return 0;
}
