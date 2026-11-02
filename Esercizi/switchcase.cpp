/*

Switch - case structure example

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time({})); // Inizializza il random
    
    std::string tmp;
    std::cout << "Benvenuto nell'app XYZ. Cosa vuoi fare?\n";
    std::cout << "1) Stampare hello world.\n";
    std::cout << "2) Generare un numero random\n";
    std::cout << "3) Stampare mezza piramide di 5 asterischi\n";
    std::cout << "Scegli un opzione inserendo un numero: ";
    std::cin >> tmp;

    const int scelta = std::stoi(tmp);

    switch(scelta){
        case 1:
            std::cout << "Hello World";
            break;
        case 2:
            std::cout << std::rand();
            break;
        case 3:
            for(int i=1; i <= 5; i++){
                for(int j = 1; j<=i; j++){
                    std::cout << "*";
                }
                std::cout << "\n";
            }
    }
}
