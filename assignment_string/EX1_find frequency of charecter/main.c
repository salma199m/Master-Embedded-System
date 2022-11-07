/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	char string[100], character;
	int i,count=0;

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(string);

	printf("Enter a character to find frequency: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);

	for(i=0; string[i]!='\0'; i++){
		if(character == string[i])
			count++;
	}

	printf("frequency of %c = %d", character, count);

	return 0;
}

