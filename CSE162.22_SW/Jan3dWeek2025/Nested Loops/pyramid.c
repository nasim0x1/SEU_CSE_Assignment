#include <stdio.h>
/*
 * TODO : Write a C program to make such a pattern like a pyramid with 
 * a number with the following pattern( you have yo take an input):
 * 
 *     1
 *    2 2
 *   3 3 3
 *  4 4 4 4
 * 
 */ 
int main(){
	int row;
	printf("Please input the pyramid height: ");
	scanf("%d", &row);
	for(int i = 1; i <= row; i++){
		// lets print the spaces first
		for(int j = 1; j <= (row - i); j++) printf(" ");
		for(int j = 1; j <= i; j++) printf("%d ", i);
		printf("\n");
	}
	return 0;
}
