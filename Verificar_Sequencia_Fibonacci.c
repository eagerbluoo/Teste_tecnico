#include <stdio.h>
#include <stdlib.h>


int main(){
int numero;
int j = 0, valor = 1;


printf("Digite um número afim de verificar se ele pertence a sequência de Fibonacci:");
scanf("%d", &numero);

while (valor < numero) {
        int temporario = valor;
        valor = valor + j;
        j = temporario;
    }

if(numero == 0 || numero == 1){
    printf("O numero %d pertence a sequencia de Fabonacci", numero);
}

else if (numero == valor){
    printf("O numero %d pertence a sequencia de Fabonacci", valor);
}

else{
    printf("Numero digitado não pertence a sequencia de Fabonacci.");
}
return 0;
}
