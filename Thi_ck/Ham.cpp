#include <stdio.h>
#include "thu_vien.h"

void print_high_low_bytes(unsigned short num) {
    unsigned char high = (num >> 8) & 0xFF;  // 8 bit cao
    unsigned char low = num & 0xFF;         // 8 bit thap

    printf("High byte: %u (0x%02X)\n", high, high);
    printf("Low byte: %u (0x%02X)\n", low, low);
}