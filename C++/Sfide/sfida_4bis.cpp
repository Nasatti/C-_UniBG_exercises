#include <iostream>
using namespace std;

int main(){
	int scelta, a, b;
	do{						cout<<"somma"<<endl<<"differenza"<<endl<<"moltiplicazione"<<endl<<"divisione"<<endl;
	cin>>scelta;
	cin>>a>>b;
	switch(scelta){
		case 1:
			cout<<a+b<<endl;
		break;
		case 2:
			cout<<a-b<<endl;
		break;
		case 3:
			cout<<a+b<<endl;
		break;
		case4:
			if(b!=0) cout<<(float)a/b<<endl;
		break;
	}
	system("pause");
	system("continue");
	}while(scelta!=0);
	return 0;
}