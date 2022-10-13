/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include <stdio.h>
int main()
{
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f\n %f\n %f/n",&x,&y,&z);
	if(x>=y && x>=z){
		printf("largest number =%.2f ",x);
	}
	else if(y>=x && y>=z){
		printf("largest number =%.2f",y);
	}
	else{
		printf("largest number =%.2f ",z);
	}
	return 0;
}


