/*
 * lab2.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Benjamin Longwell
 *      CS 271: Lab 2: Functions
 */
#include "lab2functions.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stddef.h>
#define SIZE 15

int main(void) {
	//variables
	size_t size = SIZE;
	char a[15] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o'};
	char b[15] = {'1','2','3','4','5','6','7','8','9','0','a','b','c','d','e'};
	char c[15] = {'1','2','3','4','5','6','7','8','9','0','a','b','c','d','e'};
	char d[15] = {'a','2','3','4','5','6','7','8','9','0','a','b','c','d','e'};

	//calls to printCharArray(), numMatches(), countLetteres(), and capitalize()
	//printCharArray
	puts("These are the 4 arrays, a, b, c, and d respectively using the printCharArray() function");
	printCharArray(a,size);
	printf("\n");
	printCharArray(b, size);
	printf("\n");
	printCharArray(c, size);
	printf("\n");
	printCharArray(d, size);
	printf("\n");

	puts("These are the number of matches between the two arrays B and C, as well as C and D, respectively using the numMatches() function");
	numMatches(b,c,size);
	puts("");
	numMatches(c,d,size);
	puts("");

	puts("These are the number of alphabetic characters in the arrays A, B, C, and D respectively, using the countLetters() function");
	countLetters(a, size);
	countLetters(b, size);
	countLetters(c, size);
	countLetters(d, size);

	puts("Testing the capitalize() function.");
	capitalize(a, size);
	capitalize(b, size);
	capitalize(c, size);
	capitalize(d, size);

}//end main

