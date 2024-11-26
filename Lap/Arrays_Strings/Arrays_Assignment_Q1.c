/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

	float first_array[2][2] , second_array[2][2] , sum_array[2][2];

	printf("Enter the elements of 1st matrix\n");
	for(short signed int i= 0; i <= 1; i++){
		for(short signed int j= 0; j <= 1; j++){
			printf("Enter a%hd%hd\n" , i + 1 , j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &first_array[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
	for(short signed int i= 0; i <= 1; i++){
		for(short signed int j= 0; j <= 1; j++){
			printf("Enter b%hd%hd\n" , i + 1 , j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &second_array[i][j]);
			sum_array[i][j]= first_array[i][j] + second_array[i][j];
		}
	}

	printf("Sum of matrix\n");
	for(short signed int i= 0; i <= 1; i++){
		for(short signed int j= 0; j <= 1; j++) printf("%f\t" , sum_array[i][j]);
		printf("\n");
	}

	return 0;
}
