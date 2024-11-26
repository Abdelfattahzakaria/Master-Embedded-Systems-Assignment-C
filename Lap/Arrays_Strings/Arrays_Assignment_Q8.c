/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q8

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

    signed char string[100] , temp[100];
    short signed int length= strlen(string) - 1;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(string);

    for(short signed int i= length; i >= 0; i--) temp[length - i]= string[i];

    printf("\nReverse string: %s\n" , temp);

	return 0;
}
