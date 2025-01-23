#include <stdio.h>
/*
 * TODO: Write a program that will count the 
 * frequency of each element of an array 
 * 
 */
int main(){
	int n;
	printf("Input array size: ");
	scanf("%d", &n);
	printf("Inpur number with space separeted: ");
	int arr[n];
	int count[100] = {0};
	
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for(int i = 0; i < n; i++){
		int curr = arr[i];
		count[curr] += 1;
	}
	for(int i = 0; i < n; i++){
		int curr = arr[i];
		printf("%d appears %d times.\n", curr, count[curr]);
	}
	return 0;
}

