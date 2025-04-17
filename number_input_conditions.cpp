#include <iostream>
using namespace std;

int main() {
	float number;

	while (true) {
		cout << "Enter number: ";
		cin >> number;

		if (number < 0) {
			cout << "Negative number entered" << endl;
			break;
		}
		else if (number == 0) {
			cout << "If you use Zero, I will skip it" << endl;
			continue;
		} else {
			cout << "Square of the number is " << number * number << endl;
		}
	}

	return 0;
}
