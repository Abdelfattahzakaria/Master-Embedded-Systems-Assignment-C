/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX4

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	float number;

	printf("Enter a number\n");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &number);

	if(number == 0 || number == 0.0) printf("You entered zero\n");
	else number > 0?printf("%f is positive\n" , number) : printf("%f is negative\n" , number);

	return 0;
}
