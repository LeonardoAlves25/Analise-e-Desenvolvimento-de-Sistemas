#include <stdio.h>

int main (void) {

  float quant, valAluguel, fatAnual, multas, quantFinal;

  printf("digite a quantidade de fitas: \n");
  scanf("%f", &quant);
  
  printf("digite o valor do aluguel:  \n");
  scanf("%f", &valAluguel);
  
  fatAnual=quant/3*valAluguel*12;
  multas=quant/10*(valAluguel/100 + valAluguel);
  quantFinal = quant - (quant*2/100);

  printf("O faturamento é : %2.f\n", fatAnual);
  printf("O valor em multas é : %2.f\n", multas);
  printf("O valo total é: %2.f\n", fatAnual+multas);

  printf("A quantidade de fitas restantes é de: %2.f\n", quantFinal);
  
  return 0;
}