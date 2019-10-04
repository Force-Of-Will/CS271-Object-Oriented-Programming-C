/*
 * helperfunctions.c
 *
 *  Created on: Feb 6, 2019
 *      Author: Benjamin Longwell
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void neatPrint(int data[], size_t length, int numPerLine, int feildSize){
	for(int i = 1; i <= length; i++){
		printf("%*d", feildSize, data[i-1]);
		if((i%numPerLine) == 0) puts("");//of if
	}//of for
}//of neatPrint

void fillArray(int data[], size_t length, int min, int max){
    srand(time(NULL));
    for(int i = 0; i < length; i++){
        data[i] = (rand() % (max-min +1)) + min;
    }//of for
}//of fillArray

void swap(int *num1Ptr, int *num2Ptr){
	int temp = *num1Ptr;
	*num1Ptr = *num2Ptr;
	*num2Ptr = temp;
}//of swap
//CALL THIS WITH THE AMPERSAND!!!!!!!!!!!!!
