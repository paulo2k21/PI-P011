/*Escreva uma função que codifica uma string em um código secreto. A regra secreta
de codificação é extremamente simples: substitui cada letra pela letra seguinte (Z é codificado como A). Por exemplo, “Estruturas de Dados” se transformaria em
“Ftusvuvsbt ef Ebept”. Escreva uma função para codificar e uma para decodificar
cadeias segundo este código. Suas funções devem escrever a string produzida em
uma string diferente da fornecida como entrada.*/

#include <iostream>
#include <string>

using namespace std;

string codifica(string texto) {
    string resultado = texto;

    for (char &c : resultado) {
        if (isalpha(c)) {
            if (c == 'Z') {
                c = 'A';
            } else if (c == 'z') {
                c = 'a';
            } else {
                c++;
            }
        }
    }

    return resultado;
}

string decodifica(string texto) {
    string resultado = texto;

    for (char &c : resultado) {
        if (isalpha(c)) {
            if (c == 'A') {
                c = 'Z';
            } else if (c == 'a') {
                c = 'z';
            } else {
                c--;
            }
        }
    }

    return resultado;
}

int main() {
    string texto = "Estruturas de Dados";

    string textoCodificado = codifica(texto);
    cout << "Texto codificado: " << textoCodificado << endl;

    string textoDecodificado = decodifica(textoCodificado);
    cout << "Texto decodificado: " << textoDecodificado << endl;

    return 0;
}
