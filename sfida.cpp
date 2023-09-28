#include <iostream>
using namespace std;

int main(){
    int a, b, q, r;
    cout << "inserisci il primo numero" << endl;
    cin >> a;
    cout << "inserisci il secondo numero" << endl;
    cin >> b;
    if(b!=0){
        q = a / b;
        r = a % b;
        cout<<"quoziente: " << q << " e resto " << r << endl;
        if(q < r){
            cout << "differneza: " << r - q << endl;
        }
        else{
            cout << "prodotto: " << r * q << endl;
        }
    }
}