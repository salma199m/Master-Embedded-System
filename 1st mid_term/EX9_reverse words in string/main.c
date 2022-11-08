/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n'){
		reverse();
	    printf("%c",c);
	}
}
int main()
{
	printf("Enter a string: ");
fflush(stdin);
fflush(stdout);
	reverse();
}

