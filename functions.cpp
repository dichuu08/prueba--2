#include <iostream>
#include <cmath>

using namespace std;

bool primeNumber(int num) {
    if (num <= 1) {
        return false;
    }

    int raiz = sqrt(num);

    for (int i = 2; i <= raiz; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void addNums(int num, int& pares, int& impares, int& neutros) {
    if (num == 0) {
        neutros++;
    } else if (num % 2 == 0) {
        pares++;
    } else {
        impares++;
    }
}


void multiple3(int num){
    cout << "Los siguientes 10 numeros multiplos de 3 despues de " << num << " son:" << endl;
    for (int i = num + 3; i <= num + 30; i += 3) {
        cout << i << endl;
    }
}



