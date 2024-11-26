/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Assignment_Q4

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


void get_base_power(short unsigned int *base , short unsigned int *power){
	printf("Enter base number: \n");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , base);

	do{
		printf("Enter poower number (positive integer): \n");
		fflush(stdin); fflush(stdout);
		scanf("%hu" , power);
	}while(*power < 0);

	return;
}

short unsigned int get_power(short unsigned int base , short unsigned power){
	if(power != 0) return (base * get_power(base , power - 1));
	return 1;
}

void get_display_power(short unsigned int *base , short unsigned int *power){
	printf("%hu ^ %hu= %hu" , *base , *power , get_power(*base , *power));
	return;
}

int main(void){

	short unsigned int base , power;
	get_base_power(&base , &power);

	get_display_power(&base , &power);

	return 0;

}

