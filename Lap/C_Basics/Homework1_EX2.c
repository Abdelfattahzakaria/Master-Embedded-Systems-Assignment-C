/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 1 _ EX2

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	short signed int number;

	printf("Enter a value:\n");
	fflush(stdin); fflush(stdout);
	scanf("%hd" , &number);

	printf("You entered: %hd\n" , number);

	return 0;
}
