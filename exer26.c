/*#include <stdio.h>

int main() {
  //Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números,onde m é a media do vetor.

 int n = 10;
  int vetor[10];
  double media = 0.0;
  double soma_quadrados = 0.0;

  printf("Digite os 10 numeros do vetor: \n");
  for(int i = 0; i < 10; i++){
    scanf("%d", &vetor[i]);
    media += vetor[i];
  }
  
  media /= n;

   for(int i = 0; i < 10; i++){
     soma_quadrados += pow(vetor[i] - media, 2);
   }
  double desvio_padrao = sqrt(soma_quadrados / n);

  printf("Desvio padrao: %.2lf\n", desvio_padrao);

}*/