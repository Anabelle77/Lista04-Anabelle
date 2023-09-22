//3. A Secretaria de Meio Ambiente, que controla o índice de poluição, mantém 3 grupos de //indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia //de 0,05 até 0,29. Se o índice sobe para 0,3 as indústrias do 1o grupo são intimadas a //suspenderem suas atividades, se o índice crescer para 0,4 as industrias do 1o e 2o grupo são //intimadas a suspenderem suas atividades,se o índice atingir 0,5 todos os grupos devem ser //notificados a paralisarem suas atividades. Faça um programa que leia o índice de poluição
#include <stdio.h>
int main() {
    float indpolu;

    printf("Insira o indice de poluicao: ");
    scanf("%f", &indpolu);

    if (indpolu >= 0.3 && indpolu < 0.4){
      printf("Industrias do primeiro grupo devem suspender as atividades.\n");
    }
    else if (indpolu >= 0.4 && indpolu < 0.5) {
      printf("Industrias do primeiro e segundo grupo devem suspender as atividades.\n");
    }
    else if (indpolu >= 0.5){
       printf("Todos os grupos devem paralisar as atividades.\n");
    }
    else{
      printf("Indice de poluicao aceitavel.\n");
    }

    return 0;
}