/*Escreva uma função chamada maximin que receba um vetor de números inteiros
chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços
de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
elemento de maior valor e o valor do elemento de menor valor.
Protótipo da Função:
void maximin(int vetor[], int n, int &maximo, int &minimo);
Escreva também uma função principal (main) que use a função maximin.*/

#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo)
{
    if (n <= 0)
    {
        cout << "O vetor está vazio." << endl;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++)
    {
        if (vetor[i] > maximo)
        {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo)
        {
            minimo = vetor[i];
        }
    }
}

int main()
{
    const int tamanho = 5;
    int meuVetor[tamanho] = {10, 5, 30, 15, 20};
    int max, min;

    maxmin(meuVetor, tamanho, max, min);

    cout << "Máximo: " << max << endl;
    cout << "Mínimo: " << min << endl;

    return 0;
}