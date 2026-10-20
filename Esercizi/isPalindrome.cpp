// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>

int myLength(const char* s){
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

int main() {
    char s[20] = "yoooooooy";
    
    
    int sLength = myLength(s);
    
    printf("\n%d\n", sLength);
    bool isPalindrome = true;
    
    for (int i = 0; i < sLength/2; i++){
        if(s[i] != s[sLength - i - 1]){
            isPalindrome = false;
            printf("%s non è palindroma.");
        }
    }

    if (isPalindrome){
        printf("%s è palindroma.");
    }
    return 0;
    
    
}