/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q6

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

    signed char sequence[100] , ch;
    short signed int count= 0;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(sequence);

    printf("\nEnter a character to find frequency : ");
    fflush(stdin); fflush(stdout);
    scanf("%c" , &ch);

    for(short signed int i= 0; i < strlen(sequence); i++){
    	if(sequence[i] == ch) count+= 1;
    }

    printf("\nFrequency of %c = %hd\n" , ch , count);


	return 0;
}
