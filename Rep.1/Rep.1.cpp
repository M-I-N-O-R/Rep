#include <iostream>

using namespace std;

void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapByReference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 10, y = 20;
	cout << "До swap по значенню: х= " << " y " << y << endl;
	swapByReference(x, y);
	cout << "Після swap по значенню: х= " << " y " << y << endl;

}



int main() {
	int x = 10, y = 20;
	cout << "До swap по значенню: х= " << " y " << y << endl;
	swapByValue(x, y);
	cout << "Після swap по значенню: х= " << " y " << y << endl;

	return 0;

}


