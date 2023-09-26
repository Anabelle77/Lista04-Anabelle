//7) Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio de uma determinada escola. Cada aluno fornecia a sua série (primeira-1, segunda-2, terceira-3 ou quarta-4), 
//quantos livros liam por mês e se gostavam de fazer redação (Sim-1 ou Não-0). Fazer um programa que leia os dados, calcule e imprima:
//A quantidade de alunos que está na terceira série;
//A maior quantidade de livros lidos por um aluno que está na quarta série;
//A porcentagem de alunos que não gostam de fazer redação e que estão na terceira série.
//OBS: A condição de parada (flag) é que seja digitado 0 (zero) para idade.
#include <stdio.h>

int main() {
  int serie, livros, redacao;
  int alunos_terceira = 0;
  int maior_livros_quarta = 0;
  int alunos_terceira_sem_redacao = 0;
  int total_alunos = 0;
  int alunos_sem_redacao = 0;

  while (1) {
    printf("Informe a série do aluno (1 a 4, 0 para encerrar): ");
    scanf("%d", &serie);

    if (serie == 0) {
      break;
    }

    printf("Quantos livros o aluno lê por mês: ");
    scanf("%d", &livros);

    printf("Gosta de fazer redação? (Sim-1, Não-0): ");
    scanf("%d", &redacao);

    if (serie == 3) {
      alunos_terceira++;

      if (redacao == 0) {
        alunos_terceira_sem_redacao++;
      }
    }

    if (serie == 4 && livros > maior_livros_quarta) {
      maior_livros_quarta = livros;
    }

    if (redacao == 0) {
      alunos_sem_redacao++;
    }

    total_alunos++;
    }

  printf("Quantidade de alunos na terceira série: %d\n", alunos_terceira);
  printf("Maior quantidade de livros lidos por um aluno na quarta série: %d\n", maior_livros_quarta);

  if (alunos_terceira > 0) {
    float porcent_terceira_sem_redacao = (float)alunos_terceira_sem_redacao/alunos_terceira * 100;
    printf("Porcentagem de alunos na terceira série que não gostam de fazer redação: %.2f%%\n", porcent_terceira_sem_redacao);
  }

  printf("Total de alunos que não gostam de fazer redação: %d\n", alunos_sem_redacao);
  return 0;
}
