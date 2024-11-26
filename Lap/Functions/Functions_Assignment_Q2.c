/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Assignment_Q2

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_number(short unsigned int *number){
	do{
		printf("Enter an positive integer\n");
		fflush(stdin); fflush(stdout);
		scanf("%hu" , number);
	}while(*number <= 0);
}


short unsigned int get_factorial(short unsigned int number){
	/*
	 * get_factorial(number - 1) this subtraction will produce an interger value
	 *  which the function will receive it so with the first call the function
	 *  parameter type will change from pointer refer to integer memory location
	 *  address to direct integer value !
	 */
	if(number == 0) return 1;
	return (number * get_factorial(number - 1));
}


void get_display_factorial(short unsigned int *number){
 	printf("Factorial of %hu = %hu \n" , *number , get_factorial(*number));
}


int main(void){

	short unsigned int number;
	get_number(&number);

	get_display_factorial(&number);

	return 0;
}



