/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions_Assignment_Q3

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void reverse(void){
	signed char c;
	fflush(stdin); fflush(stdout);
	scanf("%c" , &c);
	while(c != '\n')reverse();
    printf("%c" , c);

}


int main(void){

	printf("Enter a sentence: \n");

	reverse();
	printf("\n");

	return 0;

}



