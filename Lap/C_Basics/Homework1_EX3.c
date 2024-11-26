/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 1_ EX2

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	short signed int number1 , number2;

	printf("Enter two integers:\n");
	fflush(stdin); fflush(stdout);
	scanf("%hd %hd" , &number1 , &number2);

	printf("Sum: %hd\n" , number1 + number2);

	return 0;
}
