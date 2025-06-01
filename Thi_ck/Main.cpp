#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Thu_vien.h"

int main() {
    unsigned short input;

    printf("nhap so nguyen 16-bit (0 - 65535): ");
    if (scanf("%hu", &input) != 1) {
        printf("error\n");
        return 1;
    }

    print_high_low_bytes(input);
    return 0;
}
