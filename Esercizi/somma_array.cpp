#include <iostream>

int main() {

    int v[10] = {2,-3,-5,8,10, 5, -1, 0, -3, 2};

    int somma = 0;

    for(int i = 0; i < 10; i++){
        somma = somma + v[i];
    }

    std::cout << somma << "\n";

    return 0;
}