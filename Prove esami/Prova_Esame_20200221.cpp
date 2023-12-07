#include <iostream>
#include <cstring>
using namespace std;

struct ABBONAMENTO{
    char id[11];
    char data_emissione[11];
    char data_scadenza[11];
    char targa[11];
    float importo;
    float u_addebito;
    char data_addebito[11];
};

struct NODO{
    ABBONAMENTO info;
    NODO *next;
};

int main(){
    ABBONAMENTO info;
    NODO *head;
    /*head = new NODO;
    cin.getline(info.id, 100,'\n');
    cin.getline(info.data_emissione, 100, 'n');
    cin.getline(info.data_scadenza, 100,'\n');
    cin.getline(info.targa, 100,'\n');
    cin >> info.importo;
    cin >> info.u_addebito;
    cin.getline(info.data_addebito, 100,'\n');
    ins_testa(head, info);*/
}

int ins_testa(NODO *&head, ABBONAMENTO info){//inserimento in testa
    NODO *t;
    t = new NODO;//fondamentale per allocare memoria
    if (t == NULL) {
        return 1;
    }
    t->info = info;
    t->next = head;
    head = t;
    return 0;
}

NODO *cerca(NODO *head, char id[11]){//cerca id nella lista
    while(head!=NULL){
        if(strcmp(head->info.id, id) == 0) return head;
        head = head->next;
    }
    return NULL;
}

int SpostaAbbonamenti(NODO *&lista1, NODO *lista2, char *elencoCodici[], int size){
    NODO *r;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(cerca(lista1, elencoCodici[i]) == NULL){
            r = cerca(lista2, elencoCodici[i]);
            if(r != NULL){
                if(ins_testa(lista1, r->info) != 0){
                    return -1;
                }
            }
            count++;
        }
    }
    return count;
}