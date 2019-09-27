//
// Created by michael on 9/13/19.
//

#include <sstream>
#include <iostream>

#include "auto_tests.h"
#include "tasks.h"

using namespace std;

int i = 0;
string output;

void assertTrue(bool expression) {
    cout << i << " ";
    if (expression) {
        cout << "ok" << endl;
    } else {
        cout << "err" << endl;
    }
    ++i;
}

void testTaskA() {
    istringstream in;
    ostringstream out;

    in.clear();
    out.clear();
    in.str("1 0");
    out.str("");
    taskA(in, out);
    output = out.str();
    assertTrue(output == "V = 1\n"
                         "S = 6");

    in.clear();
    out.clear();
    in.str("2 0");
    out.str("");
    taskA(in, out);
    output = out.str();
    assertTrue(output == "V = 8\n"
                         "S = 24");

    in.clear();
    out.clear();
    in.str("2 1");
    out.str("");
    taskA(in, out);
    output = out.str();
    assertTrue(output == "V = 3.81333\n"
                         "S = 30.28");
}

void testTaskB() {
    istringstream in;
    ostringstream out;

    in.clear();
    out.clear();
    in.str("1234");
    out.str("");
    taskB(in, out);
    output = out.str();
    assertTrue(output == "4123");

    in.clear();
    out.clear();
    in.str("1000");
    out.str("");
    taskB(in, out);
    output = out.str();
    assertTrue(output == "100");
}

void testTaskC() {
    istringstream in;
    ostringstream out;

    in.clear();
    out.clear();
    in.str("5 6");
    out.str("");
    taskC(in, out);
    output = out.str();
    assertTrue(output == "46488");

    in.clear();
    out.clear();
    in.str("2 1");
    out.str("");
    taskC(in, out);
    output = out.str();
    assertTrue(output == "1448");
}

void runAutoTests() {
    testTaskA();
    testTaskB();
    testTaskC();
}