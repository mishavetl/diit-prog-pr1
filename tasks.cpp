//
// Created by michael on 9/13/19.
//

#include <iostream>
#include "tasks.h"

using namespace std;

const double PI = 3.14;

void taskA(istream &in, ostream &out) {
    double a, r;
    in >> a >> r;

    out << "V = " << a * a * a - 4 * PI * r * r * r / 3 << endl;
    out << "S = " << 6 * a * a - 2 * PI * r * r + 4 * PI * r * r;
}

void taskB(istream &in, ostream &out) {
    int n;
    in >> n;

    int m = n % 10 * 1000 + n / 10;
    out << m;
}

void taskC(istream &in, ostream &out) {
    long long a, b;
    in >> a >> b;
    out << 216 * a + 216 * a * a * b + 72 * a * b * b + 8 * b;
}