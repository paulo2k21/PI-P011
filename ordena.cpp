/*Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.*/

#include <iostream>


using namespace std;

int main(){





}


float ordena (float v1,float v2,float v3,float v4){

 float desordenado [4] {v1, v2, v3, v4};
 float ordena [4];
  
  for (int i = 0; i < 4; i++)
  {
    
    for (int j = 0; j < 4; j++)
    {
        
     if (desordenado [j] < ordena[i])
     {
        
           ordena [i]= desordenado [j];


     }
     



    }
    


  }
  






}