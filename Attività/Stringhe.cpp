#include <iostream>
#include <cstring>
using namespace std;

void Stampa(char *s);
void StampaInvertita(char* s1, char* s2);
void Maiuscolo(char* s1, char* s2);
void EliminaSpazi(char* s1, char* s2);
int ContaParole(char string[]);
void Sostituisci(char* s1, char* s2, char c1, char c2);
int Ricorrenza(char* s, char c);

int main() {
    int scelta;
    char s1[100], s2[100], c1, c2;
    cout << "Inserisci una stringa" << endl;
    cin.getline(s1, 100, '\n');
    do {
        cout << "1.Stamparla\n2.Stamparla invertita\n3.Stampare la stringa in maiuscolo\n4.Stampare eliminando spazi\n5.Contare il numero di parole presenti\n6.Permetta di sostituire un carattere con un altro\n7.Calcoli la ricorrenza di una determinata lettera dell'alfabeto(m o M)\n8.Esci" << endl;
        cin >> scelta;
        switch (scelta) {
            case 1:
                Stampa(s1);
                break;
            case 2:
                StampaInvertita(s1, s2);
                Stampa(s2);
                break;
            case 3:
                Maiuscolo(s1, s2);
                Stampa(s2);
                break;
            case 4:
                EliminaSpazi(s1, s2);
                Stampa(s2);
                break;
            case 5:
                cout << "Ci sono " << ContaParole(s1) << " parole" << endl;
                break;
            case 6:
                cout << "Quale carattere vuoi sostituire?" << endl;
                cin >> c1;
                cout << "Con quale carattere?" << endl;
                cin >> c2;
                Sostituisci(s1, s2, c1, c2);
                Stampa(s2);
                break;
            case 7:
                cout << "Quale carattere vuoi contare?" << endl;
                cin >> c1;
                cout << "Il carattere " << c1 << " Compare " << Ricorrenza(s1, c1) << " volte" << endl;
        }
        system("pause");
        system("cls");
    } while (scelta != 8);
    return 0;
}

void Stampa(char *s) {
    cout << s << endl;
}

void StampaInvertita(char *s1, char *s2) {
    int j = 0;
    for (int i = strlen(s1) - 1; i >= 0; i--) {
        s2[j] = s1[i];
        j++;
    }
    s2[strlen(s1)] = '\0';
}

void Maiuscolo(char* s1, char* s2) {
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') s2[i] = s1[i] - 32;
        else s2[i] = s1[i];
    }
    s2[strlen(s1)] = '\0';
}

void EliminaSpazi(char* s1, char* s2) {
    int j = 0;
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != ' ') {
            s2[j] = s1[i];
            j++;
        }
    }
    s2[j] = '\0';
}

int ContaParole(char s[]) {
    int parole = 0;
    bool verifica = false;

    for (int i = 0; i < strlen(s); i++) {
        if (((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122)) {
            if (!verifica) {
                parole++;
                verifica = true;
            }
        }
        else verifica = false;
    }
    return parole;
}
void Sostituisci(char* s1, char *s2, char c1, char c2) {
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == c1) s2[i] = c2;
        else s2[i] = s1[i];
    }
    s2[strlen(s1)] = '\0';
}

int Ricorrenza(char* s, char c) {
    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == c) count++;
    }
    return count;
}