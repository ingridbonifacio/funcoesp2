#include <stdio.h>

//Programa para calcular as opções de pagamento//

void imprimir_opcoes_pagamento() {
    printf("Opções de pagamento:\n");
    printf("1) À vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$100)\n");
}

float calcular_pagamento_total(int opcao, float total_gasto) {
    if (opcao == 1) {
        return total_gasto * 0.9;
    } else if (opcao == 2) {
        return total_gasto;
    } else if (opcao == 3 && total_gasto > 100) {
        int parcelas;
        printf("Quantas parcelas (3 a 10)? ");
        scanf("%d", &parcelas);
        if (parcelas >= 3 && parcelas <= 10) {
            float total_com_juros = total_gasto * (1 + 0.03 * parcelas);
            return total_com_juros / parcelas;
        }
    }
    return -1.0;  // Opção inválida ou valor da compra abaixo de R$100
}

int main() {
    float total_gasto;
    printf("Digite o total gasto pelo cliente: R$");
    scanf("%f", &total_gasto);

    imprimir_opcoes_pagamento();
    
    int opcao;
    printf("Digite a opção desejada (1/2/3): ");
    scanf("%d", &opcao);

    float valor_prestacao = calcular_pagamento_total(opcao, total_gasto);

    if (valor_prestacao > 0) {
        printf("Valor da prestação: R$%.2f\n", valor_prestacao);
    } else {
        printf("Opção inválida ou valor da compra abaixo de R$100.\n");
    }

    return 0;
}