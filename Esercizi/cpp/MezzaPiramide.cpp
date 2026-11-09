/*
## Soluzione di:

Nicolo Radosta

## Testo

Scrivi un programma che:
1) chieda all'utente di inserire un numero intero positivo (N >= 1)
2) stampi una piramide di asterischi composta da N righe, ognuna contenente 1, 2, ..., N asterischi

## Esempio

Input: 6
Output:
*
**
***
****
*****
******
*/

#include <iostream>

using namespace std;

int main() {
    int N;
   
    // 1) Chiede all'utente di inserire un numero intero positivo N >= 1
    cout << "Inserisci un numero intero positivo N >= 1: ";
    cin >> N;
   
    // Controllo opzionale per verificare che l'input sia valido
    if (N < 1) {
        cout << "Errore: Il numero deve essere maggiore o uguale a 1." << endl;
        return 1;
    }
   
    // 2) Stampa la piramide di asterischi
    for (int i = 1; i <= N; ++i) {
        // Stampa i asterischi per la riga corrente
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Va a capo alla fine di ogni riga
        cout << endl;
    }
   
    return 0;
}
