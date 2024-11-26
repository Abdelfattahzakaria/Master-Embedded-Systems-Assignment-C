/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 1_EX7

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

	/**************************************************
	 *  Assuming a= 5 , b= 3
	 *  a= a + b ---->>  5 + 3= 8
	 *  b= a - b ---->>  8 - 3= 5
	 *  a= a - b ---->>  8 - 5= 3
	 *  a= 3 , b= 5
	 */

	a= a + b;
	b= a - b;
	a= a - b;


	printf("After swapping, value of a = %f\n" , a);
	printf("After swapping, value of b = %f\n" , b);

	return 0;
}
