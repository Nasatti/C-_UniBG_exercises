#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int array[10];
    /*vengono allocati 10 interi--> 4byte * 10 = 40byte--> 
    10 sottoaree di memoria da 4byte --> tutte le celle sono contigue*/
    array[0] = 1;
    cout << array[0] << endl;//primo
    cout << array[9] << endl;//ultimo
    cout << array << endl;//indirizzo di memoria del primo elemento
}