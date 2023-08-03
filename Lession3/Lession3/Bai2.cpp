#include<stdio.h>
void main(){
	int a[] ={1,2,3,4,5,6,7,8,9,10}, n = 10;
	printf("Cac phan tu trong mang: ");
	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
	printf("Cac phan tu chan trong mang: ");
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			printf("%d, ", a[i]);
		}		
	}
	printf("\n");
	printf("Cac phan tu chia het cho 3 hoac 5 trong mang: ");
	for (int i = 0; i < n; i++) {
		if (a[i] % 3 == 0 || a[i] % 5 == 0) {
			printf("%d, ", a[i]);
		}
	}
}