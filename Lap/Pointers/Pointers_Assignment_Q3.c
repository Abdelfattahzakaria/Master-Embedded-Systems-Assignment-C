/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                         Pointers_Assignment_Q3

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

void get_str(unsigned char *ptr_str)
{
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s" , ptr_str);

	return;
}

void get_str_rev(unsigned char *ptr_str , unsigned char *ptr_str_rev)
{
   signed char index= 0 , *ptr_str_temp= ptr_str , *ptr_str_rev_temp= ptr_str_rev;

   while(*ptr_str_temp)
   {
	   ptr_str_temp++;
	   index++;
   }


   while(index >= 0)
   {
	   ptr_str_temp--;
	   *ptr_str_rev_temp++= *ptr_str_temp;
	   index--;
   }

   *--ptr_str_rev_temp= '\0';

	return;
}

void display_str_rev(unsigned char *ptr_str_rev)
{
	unsigned char *ptr_str_rev_temp= ptr_str_rev;

	while(*ptr_str_rev_temp) printf("%c" , *ptr_str_rev_temp++);
    printf("\n");

	return;
}

int main(void)
{

	unsigned char str[50] , str_rev[50] , *ptr_str , *ptr_str_rev;
	ptr_str= str;
	ptr_str_rev= str_rev;

	get_str(ptr_str);


	get_str_rev(ptr_str , ptr_str_rev);

	display_str_rev(ptr_str_rev);

	return 0;

}


