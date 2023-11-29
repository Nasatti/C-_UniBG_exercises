#include <iostream>
using namespace std;
int main() {
	const int DIM = 10;
	int v[DIM], n;
	bool verifica = false;
	for (int i = 0; i < DIM; i++) {
		do {
			cin >> n;
			for (int j = 0; j < DIM; j++) {

				if (v[j] == n) verifica = true;
			}
			if (!verifica) v[i] = n;
		} while (verifica);
	}

	for (int i = 0; i < DIM; i++) {
		cout << "Posizione: " << i << endl;
		cout << "Valore: " << v[i] << endl;
	}
	return 0;
}