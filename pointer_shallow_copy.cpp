#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int* ptr1 = &num;
    int* ptr2 = ptr1;

    cout << "Original value of num: " << num << endl;

    *ptr1 = 100;

    cout << "Value of num after modifying via ptr1: " << num << endl;
    cout << "Value pointed by ptr2 : " << *ptr2 << endl;

    *ptr2 = 200;

    cout << "Value of num after modifying via ptr2: " << num << endl;
    cout << "Value pointed by ptr1 : " << *ptr1 << endl;

    return 0;
}
