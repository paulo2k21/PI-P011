/*Faça uma função chamada conta_primos que receba um vetor de números inteiros e
retorne a quantidade de números do vetor que são primos.
Lembrando que um número primo é aquele divisível apenas por 1 e por ele mesmo.*/

#include <iostream>
#include <cmath>

using namespace std;

bool EhPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true; // 2 e 3 são primos
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }

    
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int ContaPrimos(int vetor[], int tamanho) {
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if (EhPrimo(vetor[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    const int tamanho = 6;
    int numeros[tamanho] = {2, 3, 4, 5, 6, 7};

    int quantidadePrimos = ContaPrimos(numeros, tamanho);

    cout << "Quantidade de números primos no vetor: " << quantidadePrimos << endl;

    return 0;
}