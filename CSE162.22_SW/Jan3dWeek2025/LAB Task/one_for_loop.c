#include <stdio.h>

/*
 * TODO: Write code to calculate the series below using a FOR loop
 * Series: 2 + 4 + 6 + ... + 2n
 */

int main(){
	int n , sum = 0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i = 2; i <= (2*n); i += 2) sum += i;
	printf("2 + 4 + 6 + ... + 2*n = %d [where n = %d]", sum, n);
	
	return 0;
	
}
