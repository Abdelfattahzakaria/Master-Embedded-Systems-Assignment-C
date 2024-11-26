/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Structure_Union_Enum_Assignment_Q1

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct SStudentInfo{
	unsigned char name[50];
	short unsigned int roll;
	float marks;
}SStudentInfoDT;

void get_student_info(SStudentInfoDT *LStudentInfoOBJ){
	printf("Enter information of students:\n");

	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s" , LStudentInfoOBJ->name);

	printf("Enter roll: ");
	fflush(stdin); fflush(stdout);
	scanf("%hu" , &LStudentInfoOBJ->roll);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &LStudentInfoOBJ->marks);

	return;
}

void display_student_info(SStudentInfoDT *LStudentInfoOBJ){
	printf("Displaying information:\n");
	printf("name: %s\n" , LStudentInfoOBJ->name);
	printf("roll: %hu\n" , LStudentInfoOBJ->roll);
	printf("marks: %f\n" , LStudentInfoOBJ->marks);

	return;
}


int main(void){

	SStudentInfoDT LStudentInfoOBJ= {{'\0'} , 0 , 0.0};
	get_student_info(&LStudentInfoOBJ);

	display_student_info(&LStudentInfoOBJ);


	return 0;

}
