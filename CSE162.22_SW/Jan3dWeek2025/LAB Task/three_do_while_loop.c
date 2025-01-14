#include <stdio.h>
/*
 * TODO: Write code to calculate the series below using a DO WHILE loop
 * Series: 1^2 + 3^2 + 5^2 + ... + (2n - 1) ^ 2
 */
int main(){
	int n ,  k = 1;
	long sum = 0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	int range = (2 * n - 1);
	do{
		sum += k * k; // square
		k+=2; // incrementing two to get next odd number
	}while(k <= (range ));
	
	printf("1^2 + 3^2 + 5^2 + ... + (2n - 1) ^ 2 = %ld [where n = %d]", sum, n);
	
	return 0;
	
}
