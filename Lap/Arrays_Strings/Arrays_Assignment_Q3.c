/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q3

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

	short signed int rows , columns;
	do{
		printf("Enter rows and column of matrix: \n");
		fflush(stdin); fflush(stdout);
		scanf("%hd %hd" , &rows , &columns);
	}while(rows <= 0 || columns <= 0);

	printf("Enter the elements of matrix\n");
	float origin_matrix[rows][columns] , transpose_matrix[columns][rows];
	for(short signed int i= 0; i < rows; i++){
		for(short signed int j= 0; j < columns; j++){
			printf("Enter element a%hd%hd: \n" , i + 1 , j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &origin_matrix[i][j]);
			transpose_matrix[j][i]= origin_matrix[i][j];
		}
	}

	printf("Entered Matrix\n");
	for(short signed int i= 0; i < rows; i++){
		for(short signed int j= 0; j <columns; j++) printf("%f\t" , origin_matrix[i][j]);
		printf("\n");
	}

	printf("Transpose Matrix\n");
	for(short signed int i= 0; i < columns; i++){
		for(short signed int j= 0; j <rows; j++) printf("%f\t" , transpose_matrix[i][j]);
		printf("\n");
	}


	return 0;
}
