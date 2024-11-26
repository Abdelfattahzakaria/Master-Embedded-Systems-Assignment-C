/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q4

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

	short signed int elements[num_elements + 1] , element , location;
	fflush(stdin); fflush(stdout);
	for(short signed int i= 0; i < num_elements; i++){
		scanf("%hd" , &elements[i]);
	}

	printf("\nEnter the element to be inserted : \n");
	fflush(stdin); fflush(stdout);
	scanf("%hd" , &element);

	do{
		printf("Enter the location : \n");
		fflush(stdin); fflush(stdout);
		scanf("%hd" , &location);
	}while(location <= 0 || location > num_elements);


	for(short signed int i= num_elements ; i >= location; i--)
		elements[i]= elements[i - 1];
	elements[location - 1]= element;

	for(short signed int i= 0; i <= num_elements; i++) printf("%hd\t" , elements[i]);
	printf("\n");


	return 0;
}
