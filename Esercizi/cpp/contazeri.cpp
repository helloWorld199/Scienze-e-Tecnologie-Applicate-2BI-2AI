#include <iostream>

int main() {

    int v[15] = {1,0,0,1,0,0,1,0, 1, 1,0,1,0,1,0};

    int conta = 0;
    for(int i = 0; i < 15; i++){
        if(v[i] == 0){
            conta = conta + 1;
        }
    }

    std::cout << conta;
    

}
