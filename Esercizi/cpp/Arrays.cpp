// Arrays.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

int main()
{
    const int DIM = 6;

    float voti[DIM] = { 6.5, 9.5, 2, 7.5, 6, 5 };

    float max = voti[0];

    for (int i = 1; i < DIM; i++) {
        if (voti[i] > max) {
            max = voti[i];
        }
    }
    std::cout << max;

    
    /*
    * // stampa elementi array
    for (int i = 0; i < 6; i++) {
        std::cout << voti[i] << " ";
    }
    */


    return 0;
}
