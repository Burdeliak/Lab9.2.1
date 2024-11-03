#pragma once
namespace nsDod {
    void dod();
};
#include "dod.h"
#include "var.h" // підключення зовнішніх оголошень змінних
using namespace nsVar;

void nsDod::dod() {
    a *= -x / n; // рекурентна формула для обчислення наступного доданка
}
