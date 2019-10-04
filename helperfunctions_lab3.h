/*
 * helperfunctions.h
 *
 *  Created on: Feb 6, 2019
 *      Author: Benjamin Longwell
 *      Helper Funciton Prototypes for Lab 3
 */
#include <stdio.h>
#ifndef HELPERFUNCTIONS
#define HELPERFUNCTIONS

void swap(int *num1Ptr, int *num2Ptr);

void fillArray(int data[], size_t length, int min, int max);

void neatPrint(int data[], size_t length, int numPerLine, int feildSize);

#endif /* HELPERFUNCTIONS */
