#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 4, 7, 10, 15};
    int arr2[5];
    
    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (int i = 0; i < 5; i++) {
        *(ptr2 + i) = *(ptr1 + (4 - i));
    }

    cout << "Reversed array (arr2): ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr2 + i) << " "; 
    }
    cout << endl;

    return 0;
}
