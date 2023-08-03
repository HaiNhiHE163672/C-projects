#include<stdio.h>
int KiemTraKyTu(char a) {
	return a >= '0' && a <= '9';
}
int GhepSo(int so, char kt) {
	return so * 10 + kt - '0';
}
int TinhTong(char a[], int n) {
	int tong = 0, so = 0;
	for (int i = 0;i < n;i++) {
		if (KiemTraKyTu(a[i])) {
			so = GhepSo(so, a[i]);
		}else{
			if (so != 0) {
				printf("%d+", so);
				tong += so;
				so = 0;
			}
		}
	}
	return tong;
}
void main() {
	char a[] = { 'a', 'b', '1', '2', 'c', 'd', '3', 'e', 'f', '4', '5', 'g', 'h' };
	int n = 13;
	printf("=%d", TinhTong(a, n));
}