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
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);
	if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u' ){
		printf("%c is a vowel",x);
	}
	else if(x=='A'|| x=='E' || x=='I' || x=='O' || x=='U'){
		printf("%c is a vowel",x);
	}
	else{
		printf("%c is a constant",x);
	}
	return 0;
}


