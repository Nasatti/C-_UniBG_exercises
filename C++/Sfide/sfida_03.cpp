#include <iostream>
using namespace std;

int main() {
	int a, b;
	float q, r;
	cin >> a >> b;
	if (b != 0) {
		q = a / b;
		r = a % b;
		cout << q << endl << r << endl;
		if (q < r) cout << r - q << endl;
		else cout << q * r << endl;
	}
}