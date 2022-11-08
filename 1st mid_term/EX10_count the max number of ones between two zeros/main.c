/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include <stdio.h>

int maxOnes(int num){
	char ones = 0 ;
	while (num != 0){
		num = (num & (num<<1));
		ones++;
	}
	return ones;
}
int main(void) {
	int num ;
	printf("Enter Number : ");
	fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);
	printf("Max ones are %d ",maxOnes(num));
	fflush(stdout);

}
