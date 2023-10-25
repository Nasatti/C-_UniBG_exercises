#include <iostream>
#include <cmath>

using namespace std;
#define MAX_LEN 10
int main(){
    //y = ax^0 + bx^1 + cx^2 + dx^3 + ex^4 + fx^5
    int n;
    float coeff[MAX_LEN];
    double x, y = 0, a;

    do{
        cout << "Inserisci il grado del polinomio: ";
        cin >> n;
        if (n <= 0 or n > MAX_LEN) cout << "Grado non valido!" << endl;
    }while(n <= 0 or n > MAX_LEN);

    cout << "Inserisci il valore di x: ";
    cin >> x;

    for(int i = 0; i <= n; i++){
        cout << "Inserisci il coefficiente di grado " << i << ": ";
        cin >> coeff[i];
    }
    
    for(int i = 0; i <= n; i++){
        a = coeff[i] * pow(x, i);
        y += a;
    }

    cout << "Il valore del polinomio in x = " << x << " \212: " << y << endl;
    return 0;
}