#include <iostream>
#include <cmath>
#include "Phuong_trinh_bac_hai.h"

Phuong_trinh_bac_hai::Phuong_trinh_bac_hai(double a_, double b_, double c_) {
    a = a_;
    b = b_;
    c = c_;
}

void Phuong_trinh_bac_hai::solve() const {
    if (a == 0) {
        std::cout << "Khong phai phuong trinh bac 2\n";
        return;
    }

    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "Hai nghiem: x1 = " << x1 << ", x2 = " << x2 << "\n";
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        std::cout << "Nghiem kep: x = " << x << "\n";
    }
    else {
        std::cout << "Vo nghiem thuc\n";
    }
}
