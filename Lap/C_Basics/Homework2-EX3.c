/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX3

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	float number1 , number2 , number3;

	printf("Enter Three numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f" , &number1 , &number2 , &number3);

	if(number1 > number2){
		if(number1 > number3) printf("Largest number = %f\n" , number1);
		else printf("Largest number = %f" , number3);
	}
	else if(number2 > number3) printf("Largest number = %f" , number2);
	else printf("Largest number = %f" , number3);

	return 0;
}
