#include <stdio.h>

void trocar_elementos(int matriz[10][10]) {
    // Troca da linha 2 com a linha 8
    for (int i = 0; i < 10; i++) {
        int temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp;
    }
    
    // Troca da coluna 4 com a coluna 10
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }
    
    // Troca da diagonal principal com a secundária
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }
    
    // Troca da linha 5 com a coluna 10
    for (int i = 0; i < 10; i++) {
        int temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

int main() {
    int matriz[10][10];  // Supondo que a matriz A seja 10x10

    // Preencha a matriz com os dados

    trocar_elementos(matriz);

    // Agora a matriz foi alterada conforme as trocas especificadas

    return 0;
}