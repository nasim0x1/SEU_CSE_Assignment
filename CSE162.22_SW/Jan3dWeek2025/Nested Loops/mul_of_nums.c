#include <stdio.h>
/*
 * TODO : Write a C program which can print multiplies of number 
 * 1 to 10 like the following -
 *				1  2  3  4  5
 *				2  4  6  8  10 
 *				3  6  9  12 15 
 *				4  8  12 16 20 
 *				5  10 15 20 25 
 *				6  12 18 24 30 
 *				7  14 21 28 35 
 *				8  16 24 32 40 
 *				9  18 27 36 45 
 *				10 20 30 40 50
 */ 
int main(){
	int h = 10, w = 5;
	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++) printf("%d ", (i * j));
		printf("\n");
	}
	return 0;
}
