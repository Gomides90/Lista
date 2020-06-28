#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Dada uma lista de números de dimensão n , implemente um algoritmo que encontre um par de números que some k.
Ex: [2, 24, 8, 7, 1, 0, 5, 9, 8, 3]
k=16 */
void Dados(int i, int j, int * vet,int list){ // Implementação da lista
    for(i=0; i<list; i++){ // Percorrer lista
            printf("\n Digite a lista de numeros [%d] de [%d]: ",i+1,list);
                scanf("%d",&vet[i]); // Inserir elementos do vetor
            }
}
void Percorrer(int i, int j, int *vet,int list){ // Percorrer lista para encontrar par que some k
    int cont=0,k,con;
        printf("\n Digite a soma dos pares que deseja encontrar: ");
            scanf("%d",&con); // Numero k que se deseja encontrar
        for(i=0; i<list; i++){
                for(j=i+1; j<list; j++){ // Percorrer lista
                k= vet[i] + vet[j]; // Soma para encontrar k
                    if(k==con){ // K encontrado imprima na tela o par que some o mesmo
                        printf("\n Par de numeros que k= %d sao n1= %d e n2= %d \n",con,vet[i],vet[j]);
                            cont=1; // Controle para encontrar par
                    }
                }
            }
            if(cont==0){ // Se controle para encontrar par não se ativar imprimir par não encontrado
                printf("\n Nao ha par de numeros em que k=%d \n",con);
            }
}
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "PORTUGUESE"); // Algoritmo aceitar regras da ortografia brasileira 
        int *vet=NULL, i=0, j=0,list;
            printf("\n Digite o tamanho da lista: "); 
                scanf("%d",&list);
                    vet = (int*) malloc(list * sizeof(int)); // Dimensionamento da lista
                        Dados(i,j,vet,list); // Impementação da lista
                        Percorrer(i,j,vet,list); // Calcular par para encontrar k
    return 0;
}