/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Structure_Union_Enum_Assignment_Q3

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct SComplexNumber{
	float real_number;
	float img_number;
} SComplexNumberDT;


void get_real_img_numbers(SComplexNumberDT *SComplexNumberDTOBJ , char string[]){
	printf("%s" , string);

    fflush(stdin); fflush(stdout);
    scanf("%f %f" , &SComplexNumberDTOBJ->real_number , &SComplexNumberDTOBJ->img_number);

    return;
}


void calc_display_result(SComplexNumberDT *SComplexNumberDTOBJ1 , SComplexNumberDT *SComplexNumberDTOBJ2){
	printf("sum= %f+%fi\n" , SComplexNumberDTOBJ1->real_number+SComplexNumberDTOBJ2->real_number ,
			SComplexNumberDTOBJ1->img_number+SComplexNumberDTOBJ2->img_number);

	return;
}


int main(void){

	SComplexNumberDT SComplexNumberDTOBJ1= {0.0 , 0.0} , SComplexNumberDTOBJ2= {0.0 , 0.0};

	get_real_img_numbers(&SComplexNumberDTOBJ1 , "Enter 1st number real and imaginary respectively: ");
	get_real_img_numbers(&SComplexNumberDTOBJ2 , "Enter 2st number real and imaginary respectively: ");

	calc_display_result(&SComplexNumberDTOBJ1 , &SComplexNumberDTOBJ2);


	return 0;

}
