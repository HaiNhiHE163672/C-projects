#include<stdio.h>

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap So Phan Tu Thu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}
void InMang(int a[], int n) {
	printf("Mang: ");
	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
}
int SoDoi(int n) {
	int sodoi = 0, r;
	while (n != 0) {
		r = n % 10;
		sodoi = (sodoi * 10) + r;
		n /= 10;
	}
	return sodoi;
}
void TinhTong(int a[], int n) {
	int tong = 0;
	printf("\nCac so doi xung trong mang: ");
	for (int i = 0; i < n; i++) {
		if (a[i] == SoDoi(a[i])) {
			printf("%d, ", a[i]);
			tong += a[i];
		}
	}
	printf("\nTong cac so doi xung la: %d", tong);
}
void main() {
	int n;
	printf("Nhap n = ");
	scanf_s("%d", &n);
	int a[100];
	NhapMang(a, n);
	InMang(a, n);
	TinhTong(a, n);
}