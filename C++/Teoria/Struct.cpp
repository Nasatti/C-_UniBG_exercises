#include <iostream>
using namespace std;
/*struct Time{
    int hour;
    int minute;
    int second;
};*/
struct STUDENTE{
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
int main(){
    STUDENTE s;
    cin.getline(s.nome, 20, '\n');

    STUDENTE *b;
    b = new STUDENTE;//bisogna inizializzarla --> occupa 58 byte perche inte-->4 e char-->1
    cin.getline(b->nome, 20, '\n');//prende il contenuto in b nell'area di memoria
    //oppure cin.getline((*b).nome, 20, '\n');
}