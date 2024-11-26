/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Structure_Union_Enum_Assignment_Q6

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct{
	char name[32];
	float slary;
	int worker_no;

} SEmployeeDT;

typedef union{
	char name[32];
	float slary;
	int worker_no;

} UEmployeeDT;

int main(void){

	SEmployeeDT SEmployeeDTOBJ;
	UEmployeeDT UEmployeeDTOBJ;

	printf("The size of union= %d\n" , sizeof(UEmployeeDTOBJ));
	printf("The size of struct= %d\n" , sizeof(SEmployeeDTOBJ));

	return 0;

}
