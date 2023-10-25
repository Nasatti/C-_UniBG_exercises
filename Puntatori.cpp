#include <iostream>

int main() {
    int vett[5];
    int *p = &vett[0]; // p punta al primo elemento del vettore vett

    int x = 10;
    int* ptr = &x; // dichiarazione di un puntatore che punta all'indirizzo di memoria di x

    std::cout << "Valore di x: " << x << std::endl;
    std::cout << "Indirizzo di memoria di x: " << &x << std::endl;
    std::cout << "Valore del puntatore ptr: " << ptr << std::endl;
    std::cout << "Valore a cui punta il puntatore ptr: " << *ptr << std::endl;

    *ptr = 20; // modifica del valore di x tramite il puntatore

    std::cout << "Nuovo valore di x: " << x << std::endl;

    return 0;
}
