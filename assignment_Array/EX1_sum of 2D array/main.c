/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Shimaa Essam
 */
#include<stdio.h>
int main()
{
	float a[2][2];
	float b[2][2];
	float s[2][2];
	int r,c;
	printf("Enter the element of 1st matrix \n");
	for(r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("Enter a%d%d:", r+1,c+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}

	printf("Enter the element of 2nd matrix\n");
	for(r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("b%d%d;",r+1, c+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	for(r=0; r<2; r++){
			for(c=0; c<2; c++){
				s[r][c]=a[r][c]+b[r][c];
			}
	}
	printf("sum of matrix:\n");
	for(r=0; r<2; r++){
			for(c=0; c<2; c++){
				printf("%.1f\t",s[r][c]);
			}
	printf("\n");
	}

	return 0;

} // why sum of 2+23 = 23??

