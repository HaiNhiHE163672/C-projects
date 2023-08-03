#include <stdio.h>
#include <math.h>

int main() {
	//Cau 1
	int n, a[100], d = 0, sum =0;
	printf("Nhap so phan tu: ");
	scanf_s("%d",&n);
	while (n < 2 || n > 50) {
		printf("Nhap lai so phan tu: ");
		scanf_s("%d", &n);
	}
	for (int i = 0; i < n;i++) {
		printf("Nhap phan tu thu %d: ", i);
		scanf_s("%d",&a[i]);
	}
	printf("Mang: ");
	for (int i = 0; i < n;i++) {
		printf("%d ", a[i]);
	}
	printf("\nCac phan tu co dang 2^(n+i) la: ");
	for (int i = 0; i < n;i++) {
		if (a[i] == pow(2, n + i)) {
			printf("%d ", a[i]);
			d++;
			sum += a[i];
		}
	}
	if (d > 0) {
		printf("Trung binh cong cua cac phan tu do la: %f", sum * 1.0 / d);
	}
	else {
		printf("Khong co so nao");
	}
	

	// Cau 2
	printf("\n");
	int b[] = { 1,3,4,5,2,6,7,8,2,6,11,34,56,23,50,9 };
	int N = 16, max = b[0], min = b[0];
	for (int i = 0; i < N; i++) {
		if (b[i] > max) {
			max = b[i];
		}
		if (b[i] < min) {
			min = b[i];
		}
	}
	printf("\nSo lon nhat trong mang = %d", max);
	printf("\nSo nho nhat trong mang = %d", min);
	printf("\nTrung binh cong cua so lon nhat va nho nhat la: %f", (max+min)*1.0/2);

	// Cau 3
	printf("\n");
	int m, c[100], t = 0;
	printf("Nhap so phan tu: ");
	scanf_s("%d", &m);
	while (m < 2 || m > 50) {
		printf("Nhap lai so phan tu: ");
		scanf_s("%d", &m);
	}
	for (int i = 0; i < m;i++) {
		printf("Nhap phan tu thu %d: ", i);
		scanf_s("%d", &c[i]);
	}
	printf("Mang ban dau: ");
	for (int i = 0; i < m;i++) {
		printf("%d ", c[i]);
	}
	for (int i = 0; i < m-1; i++) {
		for (int j = i + 1; j < m; j++) {
			if (c[i] > c[j] && c[i] > 0 && c[j] > 0) {
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
			if (c[i] < c[j] && c[i] < 0 && c[j] < 0) {
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
	printf("Mang sau khi sap xep : ");
	for (int i = 0; i < m;i++) {
		printf("%d ", c[i]);
	}
}