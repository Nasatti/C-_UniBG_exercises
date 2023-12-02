#include <iostream>
#include <cstring>
using namespace std;
#define DIM 100
struct STUDENTE{
	int matricola;
	char nome[21];
	char cognome[21];
};
struct ESAME {
	int matricola;
	char esame[21];
	int voto;
};

bool InserisciStudente(STUDENTE s[DIM], int& n);
bool InserisciRisultati(ESAME e[DIM], STUDENTE s[DIM], int n_s, int& n_e);
int Somma(ESAME e[DIM], STUDENTE s[DIM], int n_s, int& n_e);

int main() {
	int scelta, n_s = 0, n_e = 0, somma;
	STUDENTE s[DIM];
	ESAME e[DIM];
	do {
		cout << "1-Inserisci studente\n2-Inserisci risultati\n3-Somma esami\n0-Esci" << endl;
		cin >> scelta;
		switch (scelta) {
		case 1:
			if (InserisciStudente(s, n_s)) {
				cout << "Studente aggiunto" << endl;
				cout << s[n_s - 1].matricola << " " << s[n_s - 1].nome << " " << s[n_s - 1].cognome << endl;
			}
			else cout << "Matricola già presente" << endl;
			break;
		case 2:
			if (InserisciRisultati(e, s, n_s, n_e)) {
				cout << "Voto aggiunto" << endl;
				cout << e[n_e - 1].matricola << " " << e[n_e - 1].esame << " " << e[n_e - 1].voto << endl;
			}
			else cout << "Matricola non presente nella lista degli studenti" << endl;
			break;
		case 3:
			somma = Somma(e, s, n_s, n_e);
			if (somma == -1) cout << "Matricola non presente nella lista degli studenti" << endl;
			else cout << "La somma \212 " << somma << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (scelta != 0);
}

bool InserisciStudente(STUDENTE s[DIM], int &n) {
	cout << "Inserisci la matricola" << endl;
	cin >> s[n].matricola;
	for (int i = 0; i < n; i++) {
		if (s[i].matricola == s[n].matricola) return false;
	}
	cin.ignore(100, '\n');
	cout << "Inserisci la nome" << endl;
	cin.getline(s[n].nome, 21, '\n');
	cout << "Inserisci la cognome" << endl;
	cin.getline(s[n].cognome, 21, '\n');
	n++;
	return true;
}

bool InserisciRisultati(ESAME e[DIM], STUDENTE s[DIM], int n_s, int &n_e) {
	cout << "Inserisci la matricola" << endl;
	cin >> e[n_e].matricola;
	for (int i = 0; i < n_s; i++) {
		if (s[i].matricola == e[n_e].matricola) {
			cin.ignore(100, '\n');
			cout << "Inserisci il corso d'esame" << endl;
			cin.getline(e[n_e].esame, 21, '\n');
			cout << "Inserisci il voto" << endl;
			cin >> e[n_e].voto;
			n_e++;
			return true;
		}
	}
	return false;
}

int Somma(ESAME e[DIM], STUDENTE s[DIM], int n_s, int& n_e) {
	int somma = 0;
	cout << "Inserisci la matricola" << endl;
	cin >> s[n_s].matricola;
	for (int i = 0; i < n_s; i++) {
		if (s[i].matricola == s[n_s].matricola) {
			for (int j = 0; j < n_e; j++) {
				if (s[i].matricola == e[j].matricola) somma += e[j].voto;
			}
			return somma;
		}
	}
	return -1;
}