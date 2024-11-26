/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Structure_Union_Enum_Assignment_Q5

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define      PI                                        3.14159
#define      CALC_AREA(radius)                        ((PI) * (radius) * (radius))

void get_radius(float *radius){
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f" , radius);

	return;
}

int main(void){

    float radius= 0.0;

    get_radius(&radius);

    printf("Area= %f" , CALC_AREA(radius));

	return 0;

}
