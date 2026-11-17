#include <iostream>

int main() {
    int v[10] = { 0, -1, 7, -10, 5, 7, 3, 2, -5, -1};

    for (int i = 0; i < 10; i++){
        if(v[i] < 0){
            std::cout << i;
        }
    }
}
