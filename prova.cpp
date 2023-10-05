#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int lower, higher, step;
    bool verifica = false;
    while(!verifica){
        cout << "Please give in a lower limit, limit >= 0:" << endl;
        cin >> lower;
        cout << "Please give in a higher limit, " << lower << " <= limit <= 50000:" << endl;
        cin >> higher;
        cout << "Please give in a step, 0 < step <= 10:" << endl;
        cin >> step;
        if(lower < 0 || higher > 50000 || step <= 0 || step > 10 || lower > higher){
            cout << "Wrong input!" << endl << endl;
        }
        else verifica = true;
    }

    cout << setw(15) << left << "Celsius" << setw(20) << "Fahrenheit" << endl;
    cout << setfill('-') << setw(7) << "" << setfill(' ') << setw(8) << "" << setfill('-') << setw(10) << "" << setfill(' ') << endl;

    for(float i = lower; i <= higher; i += step){
        cout << fixed << setprecision(5) << setw(15) << left << i << setw(10) << (i * 9/5) + 32 << endl;
    }

    return 0;
}
