#include <cstdlib>//include è una direttiva al compitatore che dice di includere una libreria
#include <iostream>//iostream --> inout/output      cstdlib --> standard library

/*esistono 2 tipologie di errori
 - di sintassi(senza ;)
 - di dizionario(sbagliando endll)
*/

using namespace std;
/*
  example of multi-line comments
*/

int main(int argc, char *argv[])//funzione principale che viene eseguita con parametri
{
  int i = 5; // variabile: tipo e nome
  char letter = 'A'; 

  cout << "Hello World !" << endl;
  cout << "An integer value (i: " << i << ")" << endl;
  cout << "A character value (letter: " << letter << ")" << endl;

  // wait for user to hit enter or another key
  // std::cin.sync();
  // std::cout << "press enter to exit...";
  // std::cin.ignore();
  // for Windows Users use
  //
  system("pause");
  return EXIT_SUCCESS;
}