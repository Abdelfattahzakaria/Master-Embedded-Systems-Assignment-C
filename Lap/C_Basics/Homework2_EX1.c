/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX1

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	short signed int number;

	printf("Enter an integer you want to check\n");
	fflush(stdin); fflush(stdout);
	scanf("%hd" , &number);

	number % 2 == 0?printf("%hd is even\n" , number) : printf("%hd is odd" , number);

	return 0;
}
