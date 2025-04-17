#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int& refA = a;

    cout << "Original value of a: " << a << endl;

    refA = 30;  

    cout << "Value of a after modifying refA: " << a << endl;
    cout << "Value of refA: " << refA << endl;

    return 0;
}
