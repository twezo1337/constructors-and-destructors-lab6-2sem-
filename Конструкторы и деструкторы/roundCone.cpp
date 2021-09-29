#include <iostream>
using namespace std;
#include <math.h>
#include <time.h>
#include "roundCone.h"


void roundCone::In(void) {

    cout << "\n������� ���������� ������ ����������: ";
    cin >> x >> y >> z;

    cout << "\n������� ������: ";
    cin >> r;

    cout << "\n������� ������: ";
    cin >> h;

    return;
}

void roundCone::Out(void) {
    cout << "\n���������� ������ ����������: ";
    cout << "(" << x << "; " << y << "; " << z << ")" << endl;

    cout << "������: ";
    cout << r << endl;

    cout << "������: ";
    cout << h << endl;

    return;
}

double roundCone::Volume() {

    return 3.14 * r * r * h / 3;
}