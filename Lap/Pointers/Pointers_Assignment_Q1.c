/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                         Pointers_Assignment_Q1

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void){

	short unsigned int m= 29 , *ab;

	printf("Address of m: %p\n" , &m);
	printf("Value of m: %hu\n\n" , m);

	ab= &m;
	printf("Now ap is assigned with the address of m\n");
	printf("Address of pointer ab: %p\n" , &ab);
	printf("Content of pointer ab: %hu\n\n" , *ab);

	m= 34;
	printf("The value of m assigned to 34 now\n");
	printf("Address of pointer ab: %p\n" , &ab);
	printf("Content of pointer ab: %hu\n\n" , *ab);

	*ab= 7;
	printf("The pointer variable ab is assigned with 7 now\n");
	printf("Address of m: %p\n" , &m);
	printf("Value of m: %hu\n" , m);


	return 0;

}


