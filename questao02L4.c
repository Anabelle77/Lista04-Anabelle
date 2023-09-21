//2. Desenvolva um algoritmo que efetue a leitura de três valores para os lados de um triângulo,
//considerando lados como: A, B e C. O algoritmo deverá verificar se os lados fornecidos forma
//realmente um triângulo (cada lado é menor que a soma dos outros dois lados). Se for esta condição
//verdadeira, deverá ser indicado qual tipo de triângulo foi formado: isósceles (dois lados iguais e um
//diferente), escaleno (todos os lados diferentes) ou eqüilátero (todos os lados são iguais).

#include<stdio.h>

int main(){
  int a, b, c;
  printf("Insira tres valores para os lados do triangulo: ");
  scanf("%d, %d, %d",&a,&b,&c);

  if(a < b+c && b < a+c && c < a+b){
    if(a == b & b == c){
      printf("Seu triangulo eh Equilatero!");
    }
    else if(a == b && b != c || b == a && a != c || c == a && a != b){
      printf("Seu triangulo eh Isosceles!");
    }
    else{
      printf("Seu triangulo eh Escaleno!");
    }
  }
  else{
    printf("Numeros invalidos, impossivel formar triangulo");
  }
  return 0;
}