/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Shimaa Essam
 */
#include <stdio.h>
int main()
{
	int x=0;
	printf("Enter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0){
		printf("%d is Even",x);
	}
	else{
		printf("%d is Odd",x);
	}
	return 0;
}

