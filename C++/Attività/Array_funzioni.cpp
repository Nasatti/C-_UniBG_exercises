#include <iostream>
#include <stdlib.h>
using namespace std;

#define DIM 50
void genera_array(int array[DIM]);
int media(int array[DIM]);
int massimo(int array[DIM]);
int minimo(int array[DIM]);
void media_4(int array[DIM], int array1[DIM], int& n);
void moda(int array[DIM], int& n, int& moda);

int main() {
    int array[DIM], array1[DIM], scelta = 0, mod = 0, n = 0, lenght;
    genera_array(array);

    do {
        cout << "1)Calcolare la media\n2)Visualizzare il massimo\n3)Visualizzare il minimo\n4)Rigenerare l'arrey\n5)Visualizzare i valori che distano meno di 4 dalla media\n6)Calcolare la moda\n7)Stampa l'array\n0)Esci" << endl;
        cin >> scelta;
        switch (scelta) {
        case 1:
            cout << "La media \212: " << media(array) << endl;
            break;
        case 2:
            cout << "Il massimo \212:" << massimo(array) << endl;
            break;
        case 3:
            cout << "Il minimo \212:" << minimo(array) << endl;
            break;
        case 4:
            genera_array(array);
            cout << "Array rigenerato" << endl;
            break;
        case 5:
            media_4(array, array1, n);
            cout << "Valori che distano meno di 4 dalla media(" << media(array) << "):" << endl;
            for (int i = 0; i < n; i++) {
                cout << array1[i] << endl;
            }
            break;
        case 6:
            moda(array, n, mod);
            cout << "La moda \212 " << mod << " ripetuta per " << n << " volte" << endl;
            break;
        case 7:
            for (int i = 0; i < DIM; i++) {
                cout << array[i] << endl;
            }
            break;
        case 0:
            cout << "Uscita del programma" << endl;
            break;
        default:
            cout << "Scelta non valida" << endl;
            break;
        }
        system("pause");
        system("cls");
    } while (scelta != 0);
}
void genera_array(int array[DIM]) {
    srand(unsigned(time(0)));
    for (int i = 0; i < DIM; i++) {
        array[i] = 1 + (rand() % 100);
    }
}

int media(int array[DIM]) {
    int somma = 0;
    for (int i = 0; i < DIM; i++) {
        somma += array[i];
    }
    return somma / DIM;
}

int massimo(int array[DIM]) {
    int max = array[0];
    for (int i = 0; i < DIM; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}

int minimo(int array[DIM]) {
    int min = array[0];
    for (int i = 0; i < DIM; i++) {
        if (array[i] < min) min = array[i];
    }
    return min;
}

void media_4(int array[DIM], int array1[DIM], int& n) {
    int medi = media(array);
    n = 0;
    for (int i = 0; i < DIM; i++) {
        if (array[i] < (medi + 4) && array[i] > (medi - 4)) {
            array1[n] = array[i];
            n++;
        }
    }
}

void moda(int array[DIM], int& n, int& mod) {
    int count;
    for (int i = 0; i < DIM; i++) {
        count = 0;
        for (int j = 0; j < DIM; j++) {
            if (array[i] == array[j]) count++;
        }
        if (count > n) {
            n = count;
            mod = array[i];
        }
    }
}