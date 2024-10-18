#include <iostream>

using namespace std;

void drawSquare(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << " + ";
		}

		cout << endl;
	}
}

int main() {
	setlocale(0, ".1251");
	int n;
	cout << " Введiть розмiр квадрата: ";
	cin >> n;

	drawSquare(n);

	return 0;
}
