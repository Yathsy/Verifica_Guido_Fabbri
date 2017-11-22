#include <iostream>
<<<<<<< HEAD
//da commentare
using namespace std;
//da commentare
int main () {
     //da commentare
     int contatore = 1;
     //da commentare
     cout << contatore << endl;
     //da commentare
=======
//Programm di Guido Fabbri
using namespace std;
//Inizio del main
int main () {
     //Variabile contatore
     int contatore = 1;
     //Cout dello stato della variabile
     cout << "Contatore = " <<contatore << endl;
     //Inizio for di incremento
>>>>>>> FIX_BUG
     for (int i = 0; i < 9; i++)
     {
         //Incremento variabile contatore
         contatore++;
<<<<<<< HEAD
         //da commentare
         cout << contatore << endl;
         
     }
     //da commentare
     system ("pause");
     //da commentare
=======
         //Cout dello stato del contatore
         cout << "Contatore = " << contatore << endl;
         //Fine For
     }
     //Blocco ello schermo per visualizzare lo stato del programma
     system ("pause");
     //Ritorna 0 perchè è int la funzione
>>>>>>> FIX_BUG
     return 0;
}
