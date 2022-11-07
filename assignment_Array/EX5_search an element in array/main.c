/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	int no, a[30], element,i;
	printf("Enter numbers of elements: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&no);

	printf("Enter the values: ");
	fflush(stdin);
	fflush(stdout);
	for(i=0; i<no; i++)
		scanf("%d",&a[i]);

	printf("Enter the element to be searched: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&element);

	i=0;
	while(i<no && element!=a[i]){
		i++;
	}
	if(i<no)
		printf("number found at location %d", i+1);
	else
		printf("number not found");
	return 0;
}

