#include <iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 9; i++) { // 8 -> 9
		cout << i << " ´Ü" << endl;
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
}