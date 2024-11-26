/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX2

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	signed char ch;

	printf("Enter an alphabet\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &ch);

	/**********************************************************

	 * For Direct Constant Conditional Values Switch Statement Is Preferred

	 */
	switch(ch){
	case 'a': printf("%c is vowel\n" , ch); break;
	case 'e': printf("%c is vowel\n" , ch); break;
	case 'i': printf("%c is vowel\n" , ch); break;
	default: printf("%c is consonant\n" , ch);
	}

	return 0;
}
