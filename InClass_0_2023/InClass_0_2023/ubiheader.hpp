#pragma once
/*BIEN 4280 FALL 2023
  PROGRAM NAME: In Class 1 Header - Monosov
  CREATED BY: Natanel Monosov
  LAST UPDATED: 09/07/2023
  PROGRAM DESCRIPTION: All purpose "ubiquitous" header file, storing often-used functions.*/
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#ifndef UBIHEADER #define UBIHEADER

void count(int max, int step, int* arr, int num); // prototype
void count(int max, int step, int* arr, int num) {
	int i = 0;
	// int num = 0;
	// num = max / step;
	// int* stepper = new int[num];
	for (i = 1; i <= num; i++) {// keep stepping until reaching max, start at i=1 so there's no arr[-1] in line 17
		arr[i] = arr[i - 1] + step; // store each step in array for printing in main
	}

	/*	while loop alternative, don't need to take in num
	*
	*		while(i<=max){
	*		arr[i] += step;
	*		i++;
	*		i += step;
	*		}
	*/
}

#endif