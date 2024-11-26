/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays_Assignment_Q2

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

	short signed int num_data;
	do{
		printf("Enter the numbers of data: \n");
		fflush(stdin); fflush(stdout);
		scanf("%hd" , &num_data);
	}while(num_data <= 0);

	float data[num_data] , sum= 0.0;
	for(short signed int i= 0; i < num_data; i++){
		printf("%hd. Enter number: \n" , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f" , &data[i]);
		sum+= data[i];
	}

	printf("Average = %f\n" , sum / num_data);


	return 0;
}
