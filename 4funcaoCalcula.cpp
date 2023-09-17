/*Escreva uma função calcula que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y.*/
#include <iostream>

using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    
    X = soma;
    Y = subtracao;
}

int main() {
    int num1, num2;

    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    calcula(num1, num2);

    cout << "A soma dos números: " << num1 << endl;
    cout << "A subtração dos números: " << num2 << endl;

    return 0;
}