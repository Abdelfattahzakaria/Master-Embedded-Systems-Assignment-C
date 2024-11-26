/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Structure_Union_Enum_Assignment_Q4

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct SStudentInfo{
	char name[100];
	float marks;
} SStudentInfoDT;


void get_display_students_info(SStudentInfoDT SStudentInfoDTArrOBJ[] , short unsigned int arr_size ,
		char main_title[] , char name_title[] , char marks_title[] , char mode){
	if(mode == 'E'){
		printf("%s" , main_title);
		for(short unsigned int i= 0; i < arr_size; i++){
			printf("For roll number %hu\n" , i + 1);
			printf("%s" , name_title);
			fflush(stdin); fflush(stdout);
			scanf("%s" , SStudentInfoDTArrOBJ[i].name);

			printf("%s" , marks_title);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &SStudentInfoDTArrOBJ[i].marks);
		}
	}
	else{
		printf("%s" , main_title);
		for(short unsigned int i= 0; i < arr_size; i++){
			printf("For roll number %hu\n" , i + 1);
			printf("%s: %s\n" , name_title , SStudentInfoDTArrOBJ[i].name);
			printf("%s: %f\n" , marks_title , SStudentInfoDTArrOBJ[i].marks);
		}
	}

	return;

}

int main(void){

	SStudentInfoDT SStudentInfoDTArrOBJ[10];

	get_display_students_info(SStudentInfoDTArrOBJ , 10 , "Enter information of students: \n" ,
			"Enter name: " , "Enter marks: " , 'E');

	get_display_students_info(SStudentInfoDTArrOBJ , 10 , "Displaying information of students: \n" ,
				"name: " , "marks: " , 'D');

	return 0;

}
