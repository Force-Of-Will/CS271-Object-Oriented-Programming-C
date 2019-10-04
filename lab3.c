/*
 * lab3.c
 *
 *  Created on: Feb 6, 2019
 *      Author: blong
 */

#include <stdio.h>
#include <stdlib.h>
#include "helperfunctions.h"
#include "sortingfunctions.h"

#define ARRAYSIZE 60

int main(void) {
	//declare an array of size ARRAYSIZE
	int array[ARRAYSIZE];

	//fill the array with random integers in the range 1 to 999 inclusive
	fillArray(array, ARRAYSIZE, 1, 999);

	//print the array, 10 elements per line, feils size 5
	printf("This is the array, 10 elements per line, field size 5:\n");
	neatPrint(array, ARRAYSIZE, 10, 5);

	//sort the array using selection sort and
	//print the number of comparisons that are made
	selectionSort(array, ARRAYSIZE);

	//print the array, 10 elements per line, feild size 5
	printf("These are the elements in the array, 10 elements per line and field size 5.\n");
	neatPrint(array, ARRAYSIZE, 10, 5);

	//fill the array again with random integers in the range of 10 to 500 inclusive
	fillArray(array, ARRAYSIZE, 10, 500);

	//print the array, 12 elements per line, feild size 4
	printf("These are the elements of the array, 12 elements per line, field size 4:\n");
	neatPrint(array, ARRAYSIZE, 12, 4);

	//sort the array with insertion sort and
	//print the number of comparisons that are made
	insertionSort(array, ARRAYSIZE);

	//print the array, 12 elements per line, feild size 4
	printf("This is the array, 12 elements per line, field size 4:\n");
	neatPrint(array, ARRAYSIZE, 12, 4);

}//end main

