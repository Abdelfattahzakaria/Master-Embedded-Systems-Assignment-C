/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Structure_Union_Enum_Assignment_Q2

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct SDistance{
	float feet;
	float inch;
}SDistanceDT;

typedef struct STotalFeetRemainingInch{
	float total_feet;
	float remaining_inches;
}STotalFeetExtraInchDT;

void get_distance_info(SDistanceDT *SDistanceDTOBJ , char string[]){
	printf("%s\n" , string);

	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &SDistanceDTOBJ->feet);

	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &SDistanceDTOBJ->inch);

	return;
}

void get_summation(SDistanceDT *SDistanceDTOBJ1 , SDistanceDT *SDistanceDTOBJ2 , STotalFeetExtraInchDT *STotalFeetExtraInchDTOBJ){
	float total_inchs= SDistanceDTOBJ1->inch + SDistanceDTOBJ2->inch;
	float extra_feet= trunc(total_inchs / 12);
	STotalFeetExtraInchDTOBJ->remaining_inches= total_inchs - (extra_feet * 12);
	STotalFeetExtraInchDTOBJ->total_feet= SDistanceDTOBJ1->feet + SDistanceDTOBJ2->feet + extra_feet;

	return;
}

void display_result(STotalFeetExtraInchDT *STotalFeetExtraInchDTOBJ){
	printf("sum of distances: %f feet, %f inch\n" , STotalFeetExtraInchDTOBJ->total_feet ,
			STotalFeetExtraInchDTOBJ->remaining_inches);

	return;
}
int main(void){

	SDistanceDT SDistanceDTOBJ1= {0.0 , 0.0} , SDistanceDTOBJ2= {0.0 , 0.0};
	STotalFeetExtraInchDT STotalFeetExtraInchDTOBJ= {0 , 0};

	get_distance_info(&SDistanceDTOBJ1 , "Enter information for 1st distance");
	get_distance_info(&SDistanceDTOBJ2 , "Enter information for 2st distance");

	get_summation(&SDistanceDTOBJ1 , &SDistanceDTOBJ2 , &STotalFeetExtraInchDTOBJ);

	display_result(&STotalFeetExtraInchDTOBJ);

	return 0;

}
