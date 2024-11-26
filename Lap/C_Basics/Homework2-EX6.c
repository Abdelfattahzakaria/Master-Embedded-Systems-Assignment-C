/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX6

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	short unsigned int range , sum= 0;

	printf("Enter an integer\n");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , &range);

	for(int i= 0; i <= range; i++) sum+= i;
	printf("Sum = %hu" , sum);

	return 0;
}
