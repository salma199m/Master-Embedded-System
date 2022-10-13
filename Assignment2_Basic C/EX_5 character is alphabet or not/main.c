/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include <stdio.h>
int main()
{
	char x=0;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	if((x >='A' && x <='Z') || (x >='a' && x <='z')){
		printf("%c is an Alphabet",x);
	}
	else{
		printf("%c nat an Alphabet",x);
	}
	return 0;
}


