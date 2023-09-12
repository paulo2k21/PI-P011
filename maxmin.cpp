/*Escreva uma função chamada maximin que receba um vetor de números inteiros
chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços
de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
elemento de maior valor e o valor do elemento de menor valor.
Protótipo da Função:
void maximin(int vetor[], int n, int &maximo, int &minimo);
Escreva também uma função principal (main) que use a função maximin.*/

#include <iostream> 


void maxmin (int vetor[], int n,int &maximo, int &minimo);

using namespace std;
int main (){
    int maximo;
    int minimo;

    int vetor[] = {2, 3, 4};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    maxmin(vetor,n, maximo, minimo);
    cout << "O Valor maximo: " << maximo <<endl<< "O Valor minimo: " << minimo << endl;

   
}

void maxmin (int vetor[], int n, int &maximo, int &minimo){

    minimo = vetor[0];
    maximo = vetor [0];
    for (int i = 0; i<n-1;i++){
        if (minimo > vetor[i+1]){
            minimo = vetor[i+1];
        }
        if (maximo < vetor[i+1]){
            maximo = vetor[i+1];
        }
    }
}