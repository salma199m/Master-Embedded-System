/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include <stdio.h>
int main()
{
	float x=0;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	if(x<0){
		printf("%f is negative ",x);
	}
	else if(x>0){
		printf("%f is positive",x);
	}
	else{
		printf("you entered a zero ");
	}
	return 0;
}


