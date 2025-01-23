#include <stdio.h>
/*
 * TODO:
 * Write a C program that displays the following 
 * pyramid pattern using the alphabets.
 * 		 A
 *     A B A
 *   A B C B A
 * A B C D C B A
 */
int main(){
	int r = 4;
	for(int i = 1; i <= r; i++){
		char s = 'A';
		// printing spaces
		for(int j = 1; j <= r - i; j++) printf("  ");
		// prining left side alphabets
		for(int j = 1; j <= i+1 - 1; j++) printf("%c ", s++);
		s-= 1;
		// prining right side alphabets
		for(int j = r - i; j < r-1; j++) printf("%c ", --s);
		printf("\n");
	}
	return 0;
}
