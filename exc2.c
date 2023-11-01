#include <stdio.h>

void calcular_locacoes_gratuitas(int filmes_retirados[], int locacoes_gratuitas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoes_gratuitas[i] = filmes_retirados[i] / 15;
    }
}

int main() {
    int filmes_retirados[500];  // Supondo que o vetor A tenha 500 posições
    int locacoes_gratuitas[500];  // Vetor para armazenar as locações gratuitas

    // Preencha o vetor filmes_retirados com os dados dos clientes

    calcular_locacoes_gratuitas(filmes_retirados, locacoes_gratuitas, 500);

    // Agora o vetor locacoes_gratuitas contém a quantidade de locações gratuitas para cada cliente

    return 0;
}