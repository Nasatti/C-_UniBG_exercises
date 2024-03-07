#include <iostream>
#include <cstring>
using namespace std;
int conta_parole(char string[]);
int main(){
    char string[81];
    cin.getline(string, 80, '\n');
    cout << "ci sono " << conta_parole(string)<<" parole" <<endl;
}

int conta_parole(char string[]){
    int parole = 1, l = strlen(string), i;
    bool verifica = false;
    for(i = 0; i < l; i++){
    	if(!((int)string[i]>64 && (int)string[i]<91)&&!((int)string[i]>96 && (int)string[i]<123)){
			parole++;
        	do{
        		i++;
       			if(((int)string[i]>64 && (int)string[i]<91)||((int)string[i]>96 && (int)string[i]<123)){
        			verifica = true;
        			i--;
				}
			}while(!verifica);
		}
	}
    return parole;
}