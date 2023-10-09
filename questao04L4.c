//4. Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. 
//Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
//Mostre uma mensagem informando o saldo médio e o valor do crédito.

#include <stdio.h>

int main() {
  float saldoMedio, cred;

  printf("Digite o seu saldo médio: ");
  scanf("%f", &saldoMedio);

  if (saldoMedio >= 0 && saldoMedio <= 200.00) cred = 0;
  else if (saldoMedio > 200.00 && saldoMedio <= 400.00) cred = saldoMedio/100 * 20;
  else if (saldoMedio > 400.00 && saldoMedio <= 600) cred = saldoMedio/100 * 30;
  else if(saldoMedio > 600.00) cred = saldoMedio/100 * 40;
  else {
    printf("O saldo médio não pode ser negativo.");
    }
  printf("\nO seu saldo médio é de: %.2f e o crédito é de %.2f", saldoMedio, cred);
  return 0;
}
