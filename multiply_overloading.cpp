#include <iostream>
#include <cmath>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, double b, bool flag) {
    double result = a * b;

    if (flag) {
        if (result >= 0)
            return ceil(result);
        else
            return floor(result);
    } else {
        return result;
    }
}

int main() {
    int intResult = multiply(7, 3);
    cout << "Multiply 7 * 3 = " << intResult << endl;

    double doubleResult = multiply(1.5, 6.2);
    cout << "Multiply 1.5 * 6.2 = " << doubleResult << endl;

    int mixedResult1 = multiply(5, 2.7, false);
    cout << "Multiply 5 * 2.7 with flag = false: " << mixedResult1 << endl;

    int mixedResult2 = multiply(5, 2.7, true);
    cout << "Multiply 5 * 2.7 with flag = true: " << mixedResult2 << endl;

    return 0;
}
