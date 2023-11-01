#include <stdio.h>

void somar_colunas(int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 61; i++) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma;
    }
}

int main() {
    int matriz[61][10];  // Matriz 61x10

    // Preencha a matriz com os dados

    somar_colunas(matriz);

    // Agora a última linha da matriz contém as somas das colunas

    return 0;
}