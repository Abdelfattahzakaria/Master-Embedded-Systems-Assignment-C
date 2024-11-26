/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q5

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

	short signed int num_elements;
	do{
		printf("Enter no of elements\n");
		fflush(stdin); fflush(stdout);
		scanf("%hd" , &num_elements);
	}while(num_elements <= 0);

	short signed int elements[num_elements] , element;
	fflush(stdin); fflush(stdout);
	for(short signed int i= 0; i < num_elements; i++) scanf("%hd" , &elements[i]);

	printf("\nEnter the element to be searched\n");
	fflush(stdin); fflush(stdout);
	scanf("%hd" , &element);

	for(short signed int i= 0; i < num_elements; i++)
		if(elements[i] == element){
			printf("Number found at location = %d\n" , i + 1);
			break;
		}

	return 0;
}
