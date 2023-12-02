#include <iostream>
using namespace std;

int main() {
	int n, somma;
	do {
		cin >> n;
		if (n > 0) {
			somma = 0;
			for (int i = 0; i < n; i++) {
				somma += i;
			}
			cout << somma << endl;
		}
	} while (n != 0);
	return 0;
}