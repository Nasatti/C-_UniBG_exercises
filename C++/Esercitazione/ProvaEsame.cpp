#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct VIDEOCASSETTA{
    char codice[11];
    char titolo[31];
    char regista[31];
    int anno;
    VIDEOCASSETTA *next;
};

int carica(VIDEOCASSETTA *&v);
int main(){
    int scelta;
    VIDEOCASSETTA *v = NULL;
    carica(v);
    cout<<"Inserimento di una nuova cassetta nell archivio"<<endl;
    cout<<"Stampare l archivio in ordine alfabetico per titolo;"<<endl;
    cout<<"Salvataggio in un archivio"<<endl;
    cout<<"Preparazione di un file HTML per visualizzare una tabella contenente i dati in archivio"<<endl;
    cin>>scelta;
    return scelta;
    switch(scelta){
        case 1:

        break;
    }
}
int carica(VIDEOCASSETTA *&v){
    char line[100];
    ifstream File("Videocassette.txt", ios::in);
   	if(File.is_open()){
   		while (getline(File, line)){
   	   		cout<<line<<endl;
   	  	/*if(strlen(buffer)!=0){
   	        cout<<buffer;
			}*/
   		}
   	File.close();
   }
    return 0;
}