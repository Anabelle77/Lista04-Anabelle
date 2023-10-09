//5. Um vendedor necessita de um programa que calcule o preço total devido por um cliente. 
//O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo.
//Mostrar uma mensagem no caso de código inválido.
#include <stdio.h>

int main() {
  int codigo;
  int quantidade;
  float preco_total = 0.0;

  printf("Digite o código do produto: ");
  scanf("%d", &codigo);

  printf("Digite a quantidade comprada: ");
  scanf("%d", &quantidade);

  switch (codigo) {
    case 1001:
      preco_total = quantidade * 5.32;
      break;
    case 1324:
      preco_total = quantidade * 6.45;
      break;
    case 6548:
      preco_total = quantidade * 2.37;
      break;
    case 987:
      preco_total = quantidade * 5.32;
      break;
    case 7623:
      preco_total = quantidade * 6.45;
      break;
    default:
      printf("Código de produto inválido.\n");
      return 1;
  }
  printf("O preço total é: R$ %.2f\n", preco_total);
  return 0;
}
