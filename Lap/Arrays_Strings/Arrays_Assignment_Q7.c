/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q7

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

    signed char string[100];
    short signed int length= 0 , index= 0;

    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(string);

    while(string[index++] != '\0') length++;

    printf("\nLength of string: %hd\n" , length);


	return 0;
}
