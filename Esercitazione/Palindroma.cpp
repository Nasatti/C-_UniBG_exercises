#include <iostream>
#include <cstring>
using namespace std;
bool palindroma(char string[]);
int main(){
    bool verifica = false;
    char string[11];
    cin.getline(string, 10, '\n');
    if(palindroma(string)) cout<<"stringa palindroma";
    else cout<<"stringa non palindroma";
    return 0;
}
bool palindroma(char string[]){
    int l = strlen(string);
    for(int i=0; i<l/2;i++){
        if(string[i]!=string[l-i-1]) return false;
    }
    return true;
}