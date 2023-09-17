/*Faça uma função “insere_meio(int vet[ ], int tam)” que insere um elemento no meio
de um vetor de números inteiros. Depois faça o programa principal para testar a sua
função.
Por exemplo:
Sendo o vetor = {1,2,3,4,5,6} e qtde = 6, ao usar
insere_meio(vetor, qtde, 100),
será retornado o novo valor de qtde, que passou a ser 7, e o vetor, ao término
da função, passará a ficar da seguinte forma: vetor= {1,2,3,100,4,5,6}.
Protótipo da função: int insere_meio( int *vetor, int qtde, int elemento);*/

#include <iostream>

using namespace std;

int insere_meio(int *vetor, int &qtde, int elemento)
{
    if (qtde <= 0)
    {
        vetor[0] = elemento;
        qtde = 1;
    }
    else if (qtde % 2 == 0)
    {
        int meio = qtde / 2;
        for (int i = qtde; i > meio; i--)
        {
            vetor[i] = vetor[i - 1];
        }
        vetor[meio] = elemento;
        qtde++;
    }
    else
    {

        int meio = qtde / 2;
        for (int i = qtde; i > meio + 1; i--)
        {
            vetor[i] = vetor[i - 1];
        }
        vetor[meio + 1] = elemento;
        qtde++;
    }
    return qtde;
}

int main()
{
    const int TAM = 10;
    int vetor[TAM] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;
    int elemento = 100;

    cout << "Vetor antes da inserção:" << endl;
    for (int i = 0; i < qtde; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    qtde = insere_meio(vetor, qtde, elemento);

    cout << "Vetor depois da inserção:" << endl;
    for (int i = 0; i < qtde; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}