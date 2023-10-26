#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    char scelta;
    do{
        cout << "Inserisci il primo numero: ";
        cin >> n1;
        if(n1 < 0 || n1 > 101){
            cout<<"Il numero inserito non \212 valido"<<endl;
        }
    }while(n1 < 0 || n1 > 101);
    do{
        cout << "Inserisci il secondo numero: ";
        cin >> n2;
        if(n2 < 0 || n2 > 101){
            cout<<"Il numero inserito non \212 valido"<<endl;
        }
    }while(n2 < 0 || n2 > 101);
    do{
        cout << "Inserisci il terzo numero: ";
        cin >> n3;
        if(n3 < 0 || n3 > 101){
            cout<<"Il numero inserito non \212 valido"<<endl;
        }
    }while(n3 < 0 || n3 > 101);
    system("cls");
    while(scelta != 'x'){
        cout<<"a - somma tra n1, n2 e n3\nb - prodotto tra n1 e n2\nc - sottrazione tra n3 e n1\nd - divisione tra n1 e n2 (risultato double)\nx - uscita dal programma"<<endl;
        cin >> scelta;
        scelta = tolower(scelta);
        switch (scelta)
        {
        case 'a':
            cout<<"numeri utilizzati:\nn1: "<<n1<<"\nn2: "<<n2<<"\nn3: "<<n3<<endl;
            cout <<"Il risultato \212: "<< n1 + n2 + n3 << endl;
            break;
        case 'b':
            cout<<"numeri utilizzati:\nn1: "<<n1<<"\nn2: "<<n2<<"\nn3: "<<n3<<endl;
            cout <<"Il risultato \212: "<< n1 * n2 << endl;
            break;
        case 'c':
            cout<<"numeri utilizzati:\nn1: "<<n1<<"\nn2: "<<n2<<"\nn3: "<<n3<<endl;
            cout <<"Il risultato \212: "<< n3 - n1 << endl;
            break;
        case 'd':
            cout<<"numeri utilizzati:\nn1: "<<n1<<"\nn2: "<<n2<<"\nn3: "<<n3<<endl;
            cout <<"Il risultato \212: "<< (double)n1 / n2 << endl;
            break;
        case 'x':
            cout << "Uscita dal programma" << endl;
            break;
        default:
            cout << "Scelta non valida" << endl;
            break;
        }
        system("pause");
        system("cls");
    }
}