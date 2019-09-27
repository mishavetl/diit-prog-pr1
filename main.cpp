#include <iostream>
#include "auto_tests.h"
#include "tasks.h"

using namespace std;

void route(int task) {
    switch (task) {
        case 0:
            taskA(cin, cout);
            break;
        case 1:
            taskB(cin, cout);
            break;
        case 2:
            taskC(cin, cout);
            break;
        case 3:
            runAutoTests();
            break;
        default:
            cout << "Not recognized task: " << task;
    }
}

int main() {
    int task = 0;
    cin >> task;
    route(task);
    return 0;
}