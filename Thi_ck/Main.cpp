#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Thu_vien.h"
#include "Phuong_trinh_bac_hai.h"

int main() {
    unsigned short input;

    printf("nhap so nguyen 16-bit (0 - 65535): ");
    if (scanf("%hu", &input) != 1) {
        printf("error\n");
        return 1;
    }

    print_high_low_bytes(input);
    

    double a, b, c;
    printf("\nNhap a, b, c cho phuong trinh bac 2: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    Phuong_trinh_bac_hai pt(a, b, c);
    pt.solve();

    return 0;

}