/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	float arr[100],avg,sum=0;
	int num,i;

	printf("Enter the numbers of data:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	for(i=0; i<num; i++){
		printf("%d Enter number: ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/num;
	printf("Average = %f",avg);
	return 0;
}

