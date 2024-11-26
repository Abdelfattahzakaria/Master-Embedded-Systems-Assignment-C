/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX7

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	long signed int number;

	printf("Enter an integer\n");
	fflush(stdin); fflush(stdout);
	scanf("%ld" , &number);

	if(number < 0) printf("Error!!! factorial of negative number doesn't exist\n");
	else if(number == 0) printf("Factorial = %d\n" , 1);
	else{
		long signed int res= 1;
		for(signed int i= 1; i <= number; i++){
			res*= i;
		}
		printf("Factorial = %ld\n" , res);
	}

	return 0;
}
