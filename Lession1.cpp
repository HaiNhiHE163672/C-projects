#include <stdio.h>
#include <math.h>

int main()
{
    // Câu 1
    int a = 100;
    float b = 121.343;
    char c = 'x';
    printf("%d \n%f \n%c ",a,b,c);

    //Câu 2
    char x;
    printf("\nNhap ky tu: ");
    scanf_s("%c", &x);
    if (x >= 48 && x <= 57) {
        printf("%c la chu so",x);
    }else if (x >= 65 && x <= 90 || x >= 97 && x <= 122) {
        printf("%c là chu cai ",x);
        if (x >= 65 && x <= 90) {
            printf(" va la chu hoa", x);
        }
        else {
            printf(" va la chu thuong", x);
        }
    }
    else {
        printf("%c là ky tu khac", x);
    }
    //Cau 3
    int n;
    double sum = 0;
    printf("\n Nhap n = ");
    scanf_s("%d",&n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += pow(1.0 / i,2);
        }
    }
    printf("Tong cac so do = %.3f", sum);
    return 0;
}
