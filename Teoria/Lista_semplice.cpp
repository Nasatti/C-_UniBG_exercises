#include <iostream>
using namespace std;

struct STUDENTE{//struttura studente
    char nome[21];
    char cognome[21];
    int eta;
    DATA data;
};
struct DATA{
        int giorno;
        int mese;
        int anno;
};

typedef struct NODO{//lista dinamica
    STUDENTE info;
    NODO *next;
};

int main(){
    STUDENTE s;
    cin.getline(s.nome, 20, '\n');

    STUDENTE *b;
    b = new STUDENTE;//bisogna inizializzarla --> occupa 58 byte perche inte-->4 e char-->1
    cin.getline(b->nome, 20, '\n');//prende il contenuto in b nell'area di memoria
    //oppure cin.getline((*b).nome, 20, '\n');

    NODO *head;//prende il primo nodo
    //guardare inserimento in coda e ordinato
}