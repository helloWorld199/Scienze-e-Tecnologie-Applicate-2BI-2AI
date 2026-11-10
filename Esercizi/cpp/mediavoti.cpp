#include <iostream>

int main() {

    float v[8] = {4.5, 5.25, 6.25, 4.5, 8.0, 4.5, 7.25, 6.75};

    for(int i = 0; i < 8; i++){
        std::cout << v[i] << "\n";
    }

    float somma = 0;
    for (int i = 0; i < 8; i++){
        somma = somma + v[i];
    }

    std::cout << "La somma totale dei voti è " << somma << "\n";

    float media = somma/8;
    std::cout << "La media dei voti è: " << media << "\n";

    

    std::cout << "Try clicking the Run button.";
    return 0;
}
