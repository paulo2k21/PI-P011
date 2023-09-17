/*Faça uma função que receba um vetor de números inteiros por parâmetro, a
quantidade de elementos do vetor, e um multiplicador e multiplique cada elemento
do vetor pelo multiplicador.
Protótipo da função: void multiplica_por_n(int *vet, int qtde, int n);*/

#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n)
{
    for (int i = 0; i < qtde; i++)
    {
        vet[i] *= n;
    }
}

int main()
{
    int tamanho = 5;
    int vetor[] = {1, 2, 3, 4, 5};
    int multiplicador = 3;

    cout << "Vetor original:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    multiplica_por_n(vetor, tamanho, multiplicador);

    cout << "Vetor após multiplicação:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
