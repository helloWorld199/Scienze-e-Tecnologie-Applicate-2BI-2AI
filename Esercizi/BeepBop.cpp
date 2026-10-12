#include <iostream>

int main() {

    for(int a=1; a<=100;a++){
        std::cout << a;
        if(a%2==0){
            std::cout <<"bop\n";
        
        }
        else{
            std::cout <<"beep\n";
        }      
    }
    return 0;
}
