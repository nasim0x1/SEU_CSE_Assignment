#include <stdio.h>
/*
 * TODO:
 * Write a program in C that can convert 
 * a decimal number into octal.
 */
int main(){
	int d, i = 0;
	int oct[100];
	printf("Enter a number to convert : ");
	scanf("%d", &d);
	printf("The Octal of %d is ",d);
	while (d != 0) {
        oct[i] = d % 8;
        d /= 8;
        i++;
    }
    while(i){
		i--;
		printf("%d", oct[i]);
	}
	return 0;
}
