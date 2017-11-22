#include <iostream>
//Programm di Guido Fabbri
using namespace std;
//Inizio del main
int main () {
     //Variabile contatore
     int contatore = 1;
     //Cout dello stato della variabile
     cout << "Contatore = " <<contatore << endl;
     //Inizio for di incremento
     for (int i = 0; i < 9; i++)
     {
         //Incremento variabile contatore
         contatore++;
         //Cout dello stato del contatore
         cout << "Contatore = " << contatore << endl;
         //Fine For
     }
     //Blocco ello schermo per visualizzare lo stato del programma
     system ("pause");
     //Ritorna 0 perchè è int la funzione
     return 0;
}
