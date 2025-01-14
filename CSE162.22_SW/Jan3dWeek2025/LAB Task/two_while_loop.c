#include <stdio.h>
/*
 * TODO: Write code to calculate the series below using a WHILE loop
 * Series: 1^3 + 2^3 + 3^3 + ... + n^3
 */
int main(){
	int n , sum = 0, k = 1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	while(k <= n){
		int temp = 1;
		// this loop will run 3 times becasue the power of 3
		for(int i = 1; i <= 3; i++) temp *= k;
		sum += temp;
		k++;
	}
	printf("1^3 + 2^3 + 3^3 + ... + n^3 = %d [where n = %d]", sum, n);
	
	return 0;
	
}
