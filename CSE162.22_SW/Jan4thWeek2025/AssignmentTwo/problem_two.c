#include <stdio.h>
/*
 * TODO: Write a program that finds the 
 * maximum and minimum elements in an array.
 * 
 */
int main(){
	int n, max = -999999, min = 999999;
	printf("Input array size: ");
	scanf("%d", &n);
	printf("Inpur number with space separeted: ");
	int arr[n];
	
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for(int i = 0; i < n; i++){
		int curr = arr[i];
		if (curr > max) max = curr;
		if (min > curr) min = curr;
	}
	printf("Maximum element is : %d\n", max);
	printf("Minimum element is : %d\n", min);
	return 0;
}
