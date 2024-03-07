#include <iostream>
using namespace std;

struct NODO {
	int n;
	NODO *left, *right;
};

NODO* NewNodo(int n);
void StampaLeaf(NODO* nodo);
void StampaNodo(NODO* nodo);
int main() {
	NODO *nodo = NewNodo(1);
	nodo->left = NewNodo(2);
	nodo->right = NewNodo(3);
	nodo->left->left = NewNodo(4);
	nodo->left->right = NewNodo(5);
	nodo->right->left = NewNodo(6);
	nodo->right->left->right = NewNodo(7);

	//leaf:457

	StampaLeaf(nodo);
	cout << endl << endl;
	StampaNodo(nodo);
}

NODO* NewNodo(int n) {
	NODO* temp = new NODO;
	temp->n = n;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void StampaLeaf(NODO *nodo) {
	if (!nodo) return;
	if (!nodo->left && !nodo->right) {
		cout << nodo->n << " ";
		return;
	}
	if (nodo->left) StampaLeaf(nodo->left);
	if (nodo->right) StampaLeaf(nodo->right);
}

void StampaNodo(NODO* nodo) {
	if (!nodo) return;
	cout << nodo->n << " ";
	if (nodo->left) {
		StampaNodo(nodo->left);
	}
	if (nodo->right) {
		StampaNodo(nodo->right);
	} 
}