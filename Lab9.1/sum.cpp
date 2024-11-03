#pragma once
namespace nsSum {
    void sum();
};
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 1;  // Ініціалізація змінних для розрахунку
    a = x;  // Перший доданок
    s = a;  // Початкова сума

    do {
        n++;
        dod(); // виклик процедури обчислення наступного доданка
        s += a;
    } while (fabs(a) > e); // умова завершення циклу
}
