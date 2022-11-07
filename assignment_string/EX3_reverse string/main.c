/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,size;
	char arr1[30], arr2[30];

	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);
	gets(arr1);

	size=strlen(arr1);

	for(i=size-1,j=0; i>=0; i--,j++)
		arr2[j]=arr1[i];

	//size=strlen(arr1);


	printf("size=%d\n",size);
	printf("string after reverse is %s ",arr2);

	return 0;

}


