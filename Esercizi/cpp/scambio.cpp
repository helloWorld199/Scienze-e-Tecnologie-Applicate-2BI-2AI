#include <iostream>
#include <stdlib.h>
#include <time.h>

void stampa(int *v, int dim){
    std::cout << "\n\nv = [";
    for(int i = 0; i < dim - 1; i++){
        std::cout << v[i] << ", ";
    }
    std::cout << v[dim - 1] << "]\n\n";
}

int main() {

    srand(time(NULL));

    int v[10] = {0};

    for(int i = 0; i < 10; i++){
        int r = rand() % 1000 + 1;
        v[i] = r;
        std::cout << "Inserito elemento " << r << " nell'array." << std::endl;
    }

    stampa(v, 10);
   
    std::cout << "Scambio...";
    int tmp = v[0];
    v[0] = v[9];
    v[9] = tmp;
   
    stampa(v,10);
   

    return 0;
}
