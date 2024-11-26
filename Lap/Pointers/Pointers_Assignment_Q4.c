/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                         Pointers_Assignment_Q4

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_numbers(unsigned short int *ptr_numbers)
{
	short unsigned int *ptr_numbers_temp= ptr_numbers;

	printf("Enter 5 number of elements in the array:\n");
	for(unsigned char i= 0; i <= 4; i++){
		printf("element-%d: " , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%hu" , ptr_numbers_temp++);
	}

	return;
}

void display_in_reverse(unsigned short int *ptr_numbers)
{
	short unsigned int *ptr_numbers_temp= ptr_numbers + 4;

    printf("The elements of array in reverse order: \n");
	for(unsigned char i= 0; i <= 4; i++) printf("element-%d: %hu\n" , i + 1 , *ptr_numbers_temp--);

	return;
}


int main(void)
{
	unsigned short int numbers[5] , *ptr_numbers;
	ptr_numbers= numbers;

	get_numbers(ptr_numbers);

	display_in_reverse(ptr_numbers);

	return 0;

}


