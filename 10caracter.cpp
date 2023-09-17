/*Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro
para guardar o tamanho do vetor.*/

#include <iostream>
#include <vector>

using namespace std;

void encontra_letra(const string &texto, char letra, int *&indices, int &tamanho) {
    vector<int> posicoes;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            posicoes.push_back(i);
        }
    }

    tamanho = posicoes.size();
    indices = new int[tamanho];

    for (int i = 0; i < tamanho; i++) {
        indices[i] = posicoes[i];
    }
}

int main() {
    string texto;
    char letra;

    cout << "Digite uma string de caracteres: ";
    cin >> texto;
    
    cout << "Digite a letra que deseja encontrar: ";
    cin >> letra;

    int *posicoes;
    int tamanho;

    encontra_letra(texto, letra, posicoes, tamanho);

    if (tamanho > 0) {
        cout << "A letra '" << letra << "' foi encontrada nas seguintes posições:" << endl;
        for (int i = 0; i < tamanho; i++) {
            cout << posicoes[i] << " ";
        }
        cout << endl;
    } else {
        cout << "A letra '" << letra << "' não foi encontrada na string." << endl;
    }

    delete[] posicoes;

    return 0;
}
