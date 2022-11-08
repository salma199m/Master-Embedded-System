/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int prime(int no)
{
	int j,flag=0;
	for(j=2; j<=no/2; ++j){
		if(no%2==0){
			flag = 1;
			break;
		}
	}
	return flag;
}

int main()
{
	int i, no1,no2,flag;
	printf("Enter two numbers:");

	fflush(stdin);
	fflush(stdout);

	scanf("%d %d",&no1,&no2);

	fflush(stdin);
	fflush(stdout);

	printf("prime numbers between %d and %d are: ",no1,no2);

	for(i=no1+1; i<no2; ++i){
		flag = prime(i);
		if(flag == 0)
			printf("%d\t",i);
	}
	return 0;
}

