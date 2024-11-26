/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX5

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	signed char ch;

	printf("Enter a character\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &ch);

	(ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)? printf("%c is alphabet\n") :
			printf("%c is not alphabet");

	return 0;
}
