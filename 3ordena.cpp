/*Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.*/

#include <iostream>

using namespace std;

void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        float temp = a;
        a = d;
        d = temp;
    }
    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        float temp = b;
        b = d;
        d = temp;
    }
    if (c > d) {
        float temp = c;
        c = d;
        d = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro números: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);

    cout << "Números ordenados em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
