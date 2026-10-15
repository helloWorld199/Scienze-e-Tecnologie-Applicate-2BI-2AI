#include <iostream>

int main() {

    int v[5] = {0,1,0,1,0};

    for(int i = 0; i < 5; i++){
        if(v[i] == 1){
                std::cout << "Trovato numero 1 in posizione " << i << "\n";
        }
    }
