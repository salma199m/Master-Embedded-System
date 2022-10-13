/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main ()
{
	char operator=0;
	float x=0 , y=0;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &operator);

	printf("Enter two operands:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &x,&y);

	switch(operator)
	{
	case'+':{
		printf("%.1f + %.1f = %.1f ",x,y,x+y);
	}
	break;
	case'-':{
		printf("%.1f - %.1f = %.1f ",x,y,x-y);
	}
	break;
	case'*':{
		printf("%.1f * %.1f = %.1f ",x,y,x*y);
	}
	break;
	case'/':{
		printf("%.1f / %.1f = %.1f ",x,y,x/y);
	}
	break;
	}
	return 0;
}
