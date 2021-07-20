#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    double x = 11.16, result;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = 13.87;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = 50.5;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = -12.38;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = -90.15;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = -42.50;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    _getch();
    return 0;
}