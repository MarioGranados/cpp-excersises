#include <iostream>

using namespace std;

int main() {
	cout << "Hello World!";

	int arr[10] = {};

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
		cout << arr[i];
	}

	return 0;
}