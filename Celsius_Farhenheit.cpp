#include <iostream>
using namespace std;

int main(){
    int lower, higher, step;
    bool verifica = false;
    while(!verifica){
        cout<<"Please give in a lower limit, limit >= 0:"<<endl;
        cin>>lower;
        cout<<"Please give in a higher limit, " << lower <<" <= limit <= 50000:"<<endl;
        cin>>higher;
        cout<<"Please give in a step, 0 < step <= 10:"<<endl;
        cin>>step;
        if(lower<0 || higher>50000 || step<=0 || step>10 || lower>higher){
            cout<<"Wrong input!"<<endl<<endl;
        }
        else verifica = true;
    }
    cout<<"Celsius\t\tFahrenheit"<<endl;
    for(int i=lower; i<=higher; i+=step){
        cout<<i<<"\t\t"<<(i*9/5)+32<<endl;
    }
    return 0;
}