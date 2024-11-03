#pragma once
namespace nsVar {
    extern int n; // зовнішні оголошення змінних
    extern double x, x_p, x_k, dx, e, a, s;
};
#include "var.h" // підключення зовнішніх оголошень змінних
namespace nsVar {
    int n;
    double x, x_p, x_k, dx, e, a, s;
};