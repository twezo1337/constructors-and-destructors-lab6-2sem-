#include <iostream>
using namespace std;
#include <math.h>
#include <time.h>
#include "roundCone.h"


void roundCone::In(void) {

    cout << "\nВведите координаты центра окружности: ";
    cin >> x >> y >> z;

    cout << "\nВведите радиус: ";
    cin >> r;

    cout << "\nВведите высоту: ";
    cin >> h;

    return;
}

void roundCone::Out(void) {
    cout << "\nКоординаты центра окружности: ";
    cout << "(" << x << "; " << y << "; " << z << ")" << endl;

    cout << "Радиус: ";
    cout << r << endl;

    cout << "Высота: ";
    cout << h << endl;

    return;
}

double roundCone::Volume() {

    return 3.14 * r * r * h / 3;
}