/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    HomeWork 2_EX8

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	float operand1 , operand2;
	signed char operator;

	printf("Enter operator either + , - , * or divide :\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &operator);

	printf("Enter two operands\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f" , &operand1 , &operand2);

	switch(operator){
	case '+': printf("%f + %f = %f\n", operand1 , operand2 , operand1 + operand2); break;
	case '-': printf("%f - %f = %f\n", operand1 , operand2 , operand1 - operand2); break;
	case '*': printf("%f * %f = %f\n", operand1 , operand2 , operand1 * operand2); break;
	case '/': printf("%f / %f = %f\n", operand1 , operand2 , operand1 / operand2); break;
	default: printf("Invalid Operator\n");
	}

	return 0;
}
