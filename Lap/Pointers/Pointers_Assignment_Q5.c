/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                         Pointers_Assignment_Q5

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define string                                        	unsigned char *

typedef struct
{
	string name;
	short unsigned int emid;
}SEmployeeDT;

int main(void)
{
	SEmployeeDT SEmployeeDTObj= {"abcd" , 123} , SEmployeeDTObj2= {"Alex" , 1002} ,
			SEmployeeDTObj3= {"kmle" , 789};

	SEmployeeDT *SEmployeeDTArrPtr[3]= {&SEmployeeDTObj , &SEmployeeDTObj2 , &SEmployeeDTObj3};

	SEmployeeDT *((*Ptr_SEmployeeDTArrPtr)[3])= &SEmployeeDTArrPtr;

    printf("Employee Name: %s\n" , (**(*Ptr_SEmployeeDTArrPtr + 1)).name);
    printf("Employee Id: %hu\n" , (**(*Ptr_SEmployeeDTArrPtr + 1)).emid);

	return 0;
}










