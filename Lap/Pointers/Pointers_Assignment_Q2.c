/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                         Pointers_Assignment_Q2

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_upr_alpha(unsigned char *ptr_alpha)
{
	unsigned char *ptr_alpha_temp= ptr_alpha;

	for(unsigned char i= 0; i <=25; i++) *ptr_alpha_temp++= i + 'A';

	return;
}

void display_upr_alpha(unsigned char *ptr_alpha)
{
	unsigned char *ptr_alpha_temp= ptr_alpha;

	for(unsigned char i= 0; i <=25; i++ , ptr_alpha_temp++) printf("%c   " , *ptr_alpha_temp);
	printf("\n");

	return;
}

int main(void)
{

	unsigned char alpha[27] , *ptr_alpha;
	ptr_alpha= alpha;

	get_upr_alpha(ptr_alpha);

	display_upr_alpha(ptr_alpha);

	return 0;

}


