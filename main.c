#include <stdio.h>

int calcula_mdc(int a, int b) {
  // Cáluclo do MDC
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcula_mmc(int a, int b) {
    // Calculo do MMC
    return (a / calcula_mdc(a, b)) * b;
}


int main() {
  
  // Declaração de variáveis
  int num_1, num_2, mmc, mdc, exit = 0;

  // Ínicio do loop
  do {  
    // Entrada de dados
    printf("<----------- Calculadora de MMC e MDC ----------->\n");
    
    do {
        printf("Digite o primeiro número (maior que 0): ");
        scanf("%d", &num_1);
        if (num_1 <= 0) {
            printf("Número inválido. ");
        }
    } while (num_1 <= 0);
    
    do {
        printf("Digite o segundo número (maior que 0): ");
        scanf("%d", &num_2);
        if (num_2 <= 0) {
            printf("Número inválido. ");
        }
    } while (num_2 <= 0);

    // Calculo do mmc e do mdc e retorno dos valores
    mmc = calcula_mmc(num_1, num_2);
    mdc = calcula_mdc(num_1, num_2);
    printf("O MMC de %d e %d é %d\n", num_1, num_2, mmc);
    printf("O MDC de %d e %d é %d\n", num_1, num_2, mdc);

    // Condição de parada ou continuação do loop
    printf("Deseja parar? (1 - Sim, 0 - Não): ");
    scanf("%d", &exit);

    // Se parar mensagem de agradecimento
    if (exit == 1) {
      printf("Obrigado por usar a calculadora de MMC e MDC! Desenvolvido por Bruno Werner\n");
    }
  } while (exit == 0);

  return 0;
}