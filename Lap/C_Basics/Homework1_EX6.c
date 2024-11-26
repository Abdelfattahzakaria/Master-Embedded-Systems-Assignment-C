/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 1_EX6

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	float a , b , temp;

	printf("Enter value of a:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &a);

	printf("Enter value of b:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &b);

	temp= a;
	a= b;
	b= temp;

	printf("After swapping, value of a = %f\n" , a);
	printf("After swapping, value of b = %f\n" , b);

	return 0;
}
