/*BIEN 4280 FALL 2023
  PROGRAM NAME: In Class 0 - Monosov
  CREATED BY: Natanel Monosov
  LAST UPDATED: 08/29/2023
  PROGRAM DESCRIPTION: A program that counts from 0 up to a given number by a given step size.*/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count(int max, int step, int* arr, int num) {
	int i = 0;
	// int num = 0;
	// num = max / step;
	// int* stepper = new int[num];
		for (i = 1; i <= num; i++) {// keep stepping until reaching max, start at i=1 so there's no arr[-1] in line 17
			arr[i] = arr[i-1]+step; // store each step in array for printing in main
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

int main(int argc, char* argv[]) { // this is how you take arguments in from the command line!
	char* stepnum = argv[1]; // argv[0] is just the name of the program
	char* maxnum = argv[2];
	int step = atoi(stepnum); // IMPORTANT: ATOI IS INTEGERS ONLY, ATOF FOR FLOAT
	int max = atoi(maxnum);
	int elements;

	printf("Enter maximum number:\n>>"); // argument 1
	scanf("%d", &max);

	printf("Enter the step size:\n>>"); // argument 2
	scanf("%d", &step);

	elements = (max/step); // number of elements in array is max number divided by the step size.
	int* arr = (int*)calloc(elements+1, sizeof(int)); // DMA array so that there can be any # elements. need to add 1 because it's how many times it divides into it
	count(max, step, arr, elements);
	printf("Here's your array! :)\n");
	for (int i = 0; i <= elements; i++) {
		printf("arr[%d] = %d\n", i, arr[i]); // print each stored value as an array that starts at 0 and steps <elements> times.
	}
	free(arr); // free DMA, got a mem heap corruption error without adding "+1" to elements (ln 33)
	return 0;
}
