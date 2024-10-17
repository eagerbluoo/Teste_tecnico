#include <stdio.h>
#include <stdlib.h>


int main(){
char texto [100];
int qtd_a = 0;
printf("Digite o texto:");
scanf("%99[^\n]", texto);


for(int i = 0; texto[i] != 0; i++){
    if (texto[i] == 'a' || texto[i] == 'A'){
         qtd_a ++;
    }
}

if (qtd_a == 0){
    printf("Não há 'A' no texto.");
}
else{
    printf("Quantidade de As no texto: %d\n", qtd_a);
}

return 0;
}
