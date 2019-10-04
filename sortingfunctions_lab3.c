/*
 * sortingfunctions.c
 *
 *  Created on: Feb 6, 2019
 *      Author: Benjamin Longwell
 */
#include <stdio.h>
#include "helperfunctions.h"
int selectionSort(int data[], size_t length)
{
	int counter = 0;
	int minimumIndex;

    for (int i = 0; i < length; i++)
    {
        minimumIndex = i;
        for (int j = i+1; j < length; j++){
        	counter++;
        	if (data[j] < data[minimumIndex]) {
        	  minimumIndex = j;
          	  }//of if
        }//of for J
        swap(&data[minimumIndex], &data[i]);
    }//of for I
    printf("There were %d comparisons made\n", counter);
	return(counter);
}//of selectionSort

int insertionSort(int data[], size_t length) {
	int counter = 0;
	for(size_t i = 1; i < length; i++){
		size_t j = i;
		int swapper = data[i];
		while(j > 0 && data[j - 1] > swapper){
			swap(&data[j], &data[j-1]);
			counter++;
			j--;
		}//of while

	}//of for
	printf("There were %d comparisons made\n", counter);
	return counter;
}//of insertionSort


