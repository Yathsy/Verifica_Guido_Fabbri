#include <iostream>

using namespace std;

int main () {
    
     int contatore = 1;
     
     cout << "Contatore = " <<contatore << endl;
     
     for (int i = 0; i < 9; i++)
     {
         contatore++;
         
         cout << "Contatore = " << contatore << endl;
         
     }
     
     system ("pause");
     
     return 0;
}
