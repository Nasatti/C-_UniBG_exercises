#include <iostream>
using namespace std;
#define DIM 10
void Bubblesort(int a[DIM], int& c);
void Bubblesort_ottimizzato(int a[DIM], int& c);
void Bubblesort_ottimizzato2(int a[DIM], int& c);

int main(){
    //Bubblesort - Insert Sort - ALbero binario - Merge Sort
    int a[DIM] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 10};
    int b[DIM] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 10};
    int c[DIM] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 10};
    int cicli = 0;

    for (int i = 0; i < DIM; i++){
        cout << a[i] << " ";
    }
    Bubblesort(a, cicli);
    cout << endl << "Ordinato con Bubblesort:\tnumero cicli: " << cicli << endl;
    for (int i = 0; i < DIM; i++){
        cout << a[i] << " ";
    }
    Bubblesort_ottimizzato(b, cicli);
    cout << endl << "Ordinato con Bubblesort ottimizzato:\tnumero cicli: " << cicli << endl;
    for (int i = 0; i < DIM; i++){
        cout << a[i] << " ";
    }
    Bubblesort_ottimizzato2(c, cicli);
    cout << endl << "Ordinato con Bubblesort ottimizzato2:\tnumero cicli: " << cicli << endl;    
    for (int i = 0; i < DIM; i++){
        cout << a[i] << " ";
    }
}

void Bubblesort(int a[DIM], int& c){
    int temp;
    c=0;
    for(int i = 0; i < DIM - 1; i++){
        for(int j = 0; j < DIM - i - 1; j++){
            c++;
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void Bubblesort_ottimizzato(int a[DIM], int& c){
    int k, temp, N=DIM;
    c=0;
    do {
		k=0;
		for(int i=0;i<N-1;i++){
            c++;
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				k=1;
			}
        }
		--N;
	} while (k==1);
}

void Bubblesort_ottimizzato2(int a[DIM], int& c){
    int temp, done;
    c=0;
    for(int i = 0; i<DIM-1; i++){
        done = 0;
        for(int k= 0; k<(DIM-i-1);k++){
            c++;
            if(a[k] > a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
                done ++;
            }
        }
        if(!done)
            break;
    }
}