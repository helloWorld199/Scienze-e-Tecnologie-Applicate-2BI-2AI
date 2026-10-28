// Cifrario di Vigenère
// https://it.wikipedia.org/wiki/Cifrario_di_Vigen%C3%A8re

#include <iostream>
#include <string>
#include <cctype>

int char_to_idx(char c){
    return c-'a';
}
int idx_to_char(int i){
    return 'a'+i;
}

int verme(int pos){
    switch(pos%5){
        case 0: return 21;
        case 1: return 4;
        case 2: return 17;
        case 3: return 12;
        case 4: return 4;
    }    
    return 0;
}

std::string cypher(std::string s){
    std::string s_cyph(size_t(s.length()), 0);
    for(int i=0; i < s.length(); i++){
        s_cyph[i] = idx_to_char(((char_to_idx(std::tolower(s[i])) + verme(i))%26));
    }

    return s_cyph;
}

int main() {
    std::string s;
    std::cout << "Inserisci stringa da cifrare: ";
    std::cin >> s;

    std::cout << cypher(s);
}
