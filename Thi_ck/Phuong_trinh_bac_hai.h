#pragma once
#ifndef PHUONG_TRINH_BAC_HAI_H
#define PHUONG_TRINH_BAC_HAI_H

class Phuong_trinh_bac_hai {
private:
    double a, b, c;

public:
    Phuong_trinh_bac_hai(double a_, double b_, double c_);
    void solve() const;
};

#endif
