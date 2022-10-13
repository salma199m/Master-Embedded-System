/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main ()
{
	int x=0 , fact =1;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	if (x>0){
		for (int i=1; i<=x; i++){
				fact*=i;
	}
		printf("factorial of %d = %d",x,fact);
	}
	else if(x == 0){
	printf("factorial of 0 = 1");
	}
	else{
		printf("Error!!! Factorial of negative number doesn't exist");
	}

	return 0;
}

