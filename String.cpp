#include <iostream>
#include <cstring>//unica libreria permessa
using namespace std;

int main(){
    //una stringa da 10 caratteri occupa 11 celle --> ultima /0
    //ogni cella/carattere occupa 1 byte
    char s1[] = {'c', 'i', 'a', 'o', '\0'};
    char s2[] = "ciao";
    char *s3 = "ciao";

    cin>>s1;
    cin.getline(s1, 10, '\n');//scrive 10 caratteri o invio
}

/*
LIRERIA CSTRING
char *strcpy(char *s1, const char *s2);--> copia s2 in s1
char *strncpy(char *s1, const char *s2, size_t n);--> copia n caratteri di s2 in s1
char *strcat(char *s1, const char *s2);--> concatena s2 a s1
char *strncat(char *s1, const char *s2, size_t n);--> concatena n caratteri di s2 a s1
int strcmp(const char *s1, const char *s2);--> confronta s1 con s2: 0 se uguali, <0 se s1<s2, >0 se s1>s2
int strncmp(const char *s1, const char *s2, size_t n);--> confronta n caratteri di s1 con s2: 0 se uguali, <0 se s1<s2, >0 se s1>s2
size_t strlen(const char *s);--> restituisce la lunghezza di s
char *strtok(char *s1, const char *s2);--> restituisce il primo token di s1 separato da uno dei caratteri di s2
*/