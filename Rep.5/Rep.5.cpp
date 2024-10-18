#include <iostream>

using namespace std;

void factorial(int n, int& result) {
	if (n == 0 || n == 1) {
		result = 1;
	}
	else {
		result = n;
		int temp;
		factorial(n - 1, temp);
		result *= temp;
	}
}

int main() {
	setlocale(0, ".1251");
	int number = 5;
	int fact = 1;
	factorial(number, fact);
	cout << " Факторiал: " << number << " = " << fact << endl;

	return 0;
}
