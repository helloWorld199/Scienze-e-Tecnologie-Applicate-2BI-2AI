/*
Chiedere all’utente un numero intero N >= 1 e stampa in output la sequenza binaria associata al numero inserito.
Esempio:
Input: N = 9
Output: 1001
(Consiglio) Usare la tecnica delle divisioni successive
*
*/

#include <iostream>

int main() {

    int N;
    std::cout << "Inserisci numero intero strettamente positivo.";
    std::cin >> N;

    while(N <= 0){
        std::cout << "Inserisci numero intero strettamente positivo.";
        std::cin >> N;
    }

    int bits[200] = {0};

    int i = 0;
    for(; N != 0; i++){
        bits[i] = N % 2;
        std::cout << "Quoziente fra " << N << " e 2 è " << N/2 << " con resto " << bits[i] << "\n";
        N = N/2;
    }

    for(int j = 1; j <= i; j++){
        std::cout << bits[i - j];
    }
        
    return 0;
}
