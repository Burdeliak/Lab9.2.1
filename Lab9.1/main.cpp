#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;

    x = x_p;
    while (x <= x_k) {
        sum(); // виклик процедури обчислення суми
        cout << fixed << setprecision(6)
            << "x = " << x << "  "
            << "s = " << s << "  "
            << "ln(x+1) = " << log(x + 1) << "  "
            << "n = " << n << endl;
        x += dx;
    }

    cin.get();
    return 0;
}
