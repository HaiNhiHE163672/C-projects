#include<stdio.h>

void NhapPhanTu(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap So Phan Tu Thu %d: ", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n) {
	printf("Mang vua nhap: ");
	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
}
int TongCacUoc(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0 && n / i != 1) {
			tong += i;
		}
	}
	return tong;
}
int GiaiThua(int n) {
	if (n == 1) {
		return 1;
	}
	return n * GiaiThua(n - 1);
}
void TinhTongCacSoDaoNghich(int a[], int n) {
	printf("Tong cac uoc cua moi phan tu trong mang: ");
	for (int i = 0;i < n; i++) {
		printf("%d, ", TongCacUoc(a[i]));
	}
	double tong = 0;
	for (int i = 0; i < n; i++) {
		tong += 1.0 / GiaiThua(TongCacUoc(a[i]));
	}
	printf("\nTong nghich dao cac giai thua cua moi phan tu: %f", tong);
}
void main1() {
	int n, a[100];
	printf("Nhap n = ");
	scanf_s("%d", &n);
	NhapPhanTu(a, n);
	XuatMang(a, n);
	TinhTongCacSoDaoNghich(a, n);
}