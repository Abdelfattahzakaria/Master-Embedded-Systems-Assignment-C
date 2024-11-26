/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 1_EX4

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	float number1 , number2;

	printf("Enter two numbers:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f" , &number1 , &number2);

	printf("Product: %f\n" , number1 * number2);

	return 0;
}
 