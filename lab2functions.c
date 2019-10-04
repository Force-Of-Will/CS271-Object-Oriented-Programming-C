/*
 * lab2funcitons.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Benjamin Longwell
 *      CS 271: Lab 2: Functions
 */
#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
 //implementation of printCharArray()

void printCharArray(char a[],int size){

	for(int i = 0; i < size; i++){

		printf("%c ", a[i]);

		if((i+1)%10 == 0) printf("\n");

	}//end for
    puts("");
}//end printCharArray

//implementation of countLetters()

void countLetters(char r[], int size){
	int counter = 0;
	for(int i = 0; i < size; i++){
			if(isalpha(r[i])) counter++;
	}//end for
	printf("There are %d letters in this array.\n", counter);

}//end countLetters

//implementation of numMatches()

void numMatches(char x1[], char y1[], int size){
	int counter = 0;
	for(int i = 0; i < size; i++){
		if(x1[i] == y1[i]) counter++;
	}//of for
	printf("There are %d matching characters in these two arrays.", counter);
}//of numMatches

//implementation of capitalize()

void capitalize(char z1[],int size){
	puts("This is the array before being changed: ");
	printCharArray(z1, size);
	for(int i = 0; i < size; i++){
		if(islower(z1[i])) z1[i] = toupper(z1[i]);
	}//of for
	puts("This is the array after being capitalized: ");
	printCharArray(z1, size);

}//of capitalize
