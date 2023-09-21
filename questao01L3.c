//1. Leia 3 valores inteiros (X, Y, Z), determina e escreve o menor deles.
#include<stdio.h>

int main(){
  int a, b, c;
  printf("Insira tres numeros: ");
  scanf("%d, %d, %d",&a,&b,&c);

  if(a > b && a > c){
    printf("O maior numero eh %d", a);
  }
  else if(b > a && b > c){
    printf("O maior numero eh %d",b);
  }
  else if(c > b && c > a){
    printf("O maior numero eh %d", c);
  }
  return 0;
}