#include <iostream>
using namespace std;

int main(){
	int scelta, a, b;
    while(scelta!=0){
        cout<<"Inserisci il primo numero"<<endl;
        cin>>a;
        cout<<"Inserisci il secondo numero"<<endl;
        cin>>b;

	    cout<<"Quale operazione intendi svolgere?"<<endl;
	    cout<<"1-somma"<<endl;
	    cout<<"2-diferenza"<<endl;
	    cout<<"3-moltiplicazione"<<endl;
	    cout<<"4-divisione"<<endl;
        cout<<"0-esci"<<endl;
	    cin>>scelta;

        switch(scelta){
            case 1:
                cout<<"Il risultato \212: "<<a+b<<endl;
            break;
            case 2:
                cout<<"Il risultato \212: "<<a-b<<endl;
            break;
            case 3:
                cout<<"Il risultato \212: "<<a*b<<endl;
            break;
            case 4:
                if(b==0) cout<<"Non puoi dividere per 0"<<endl;
                else cout<<"Il risultato \212: "<<(float)a/b<<  " con resto di "<< a%b <<endl;
            break;
            default:
                cout<<"Scelta non valida"<<endl;
            break;
        }
        system("pause");
    }
}