//5. Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. Mostrar uma mensagem no caso de código inválido.

#include <stdio.h>
#include <stdbool.h>

float DevolverValor(int code){
  if(code == 1001) return 5.32;
  else if(code == 1324) return 6.45;
  else if(code == 6548) return 2.37;
  else if(code == 987) return 5.32;
  else if(code == 7623) return 6.45;
}

int main() {
  int code, quantidade;
  float valor, total = 0;
    
  while(true){
    printf("Digite o codigo do produto ou '0' para finalizar: ");
    scanf("%i", &code);
        
    if(code == 0) break;
    
    valor = DevolverValor(code);
    if(valor == 0) {
      printf("Codigo inválido, tente novamente.\n");
      continue;
    }
        
    total += valor;
    quantidade++;
  }
  printf("\nNo total a sua de %i produtos custou R$ %.2f.\n", quantidade, total);
  return 0;
}
