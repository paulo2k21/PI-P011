/*Faça uma função que receba dois vetores de números inteiros e os seus
respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois
vetores intercalados. Depois faça o programa principal para testar a sua função.
Protótipo da função: int* intercala(int *vet1, int tam1, int *vet2, int tam2);*/

#include <iostream>

using namespace std;

int *intercala(int *vet1, int tam1, int *vet2, int tam2)
{
    int *resultado = new int[tam1 + tam2];
    int indice1 = 0, indice2 = 0, indiceResultado = 0;

    while (indice1 < tam1 && indice2 < tam2)
    {
        resultado[indiceResultado++] = vet1[indice1++];
        resultado[indiceResultado++] = vet2[indice2++];
    }

    while (indice1 < tam1)
    {
        resultado[indiceResultado++] = vet1[indice1++];
    }

    while (indice2 < tam2)
    {
        resultado[indiceResultado++] = vet2[indice2++];
    }

    return resultado;
}

int main()
{
    int vetor1[] = {1, 3, 5};
    int tamanho1 = 3;
    int vetor2[] = {2, 4, 6, 8};
    int tamanho2 = 4;

    int *resultado = intercala(vetor1, tamanho1, vetor2, tamanho2);

    int tamanhoResultado = tamanho1 + tamanho2;

    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < tamanhoResultado; i++)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;

    return 0;
}
