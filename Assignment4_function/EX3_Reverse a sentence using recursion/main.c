/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
void reverse();
int main()
{
	printf("Enter a sentence: ");
	fflush(stdin);
	fflush(stdout);
	reverse();
	return 0;
}
void reverse()
{
	char c;
	scanf("%c",&c);

	if(c != '\n'){
		reverse();
		printf("%c",c);
	}
}


