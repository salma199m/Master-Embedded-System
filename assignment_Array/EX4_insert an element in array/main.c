/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	int arr[30],num, element,location,i;
	printf("Enter number of elements:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);

	for(i=0; i<num; i++){
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be inserted:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&element);

	printf("\nEnter the location:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&location);

	for(i=num; i>=location; i--){
		arr[i]=arr[i-1];
	}
	num++;
	arr[location-1]=element;

	for(i=0; i<num; i++){
		printf("\n%d",arr[i]);
	}
	return 0;

}

