/*
2) (Medio) Chiedere all’utente un numero N >=1. Stampare in output se il numero inserito è un numero primo o no. Un numero è primo se è divisibile solo per se stesso e per 1. (I primi numeri primi sono 1,2,3,5,7,11,13,17,19…)
Esempio:
Input: N = 23
Output: Il numero è primo!
*/
#include <iostream>
using namespace std;

int main() {

    int n;
    bool primo = true;
    cout << "Inserisci un numero: " << endl;
    cin >> n;
    for(int i = 2; i < n; i++){
        if(n%i==0){
            cout << "Il numero " << n << " non è primo!";
            primo = false;
            break;
        }
    }

    if (primo){
        cout << "Il numero " << n << " è primo!";
    }
    return 0;
}