#include <stdio.h>

/*1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.*/

int main()
{
    /* A variavel numero, é usado para leitura de sequencia, e quadrado,  é usado para guardar o quadrado do numero lido*/
    int numero, quadrado; 

    /*Entrada de dados*/
    printf("\n\tCalculo dos quadrados de uma sequencia de numeros\n"); 
    printf("\nEntre com uma sequencia de numeros inteiros nao-nulos, seguida por 0:\n");   
    scanf("%d", &numero);

while (numero != 0 )
{
    quadrado = numero * numero;
    printf("O quadrado do numero %d e' %d\n", numero, quadrado);
    scanf("%d", &numero);

}
    return 0;
}
