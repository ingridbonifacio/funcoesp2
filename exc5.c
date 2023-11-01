#include <stdio.h>
#include <time.h>

void calcular_idade(char data_nascimento[]) {
    struct tm nascimento;
    struct tm hoje;
    
    strptime(data_nascimento, "%Y-%m-%d", &nascimento);
    
    time_t t;
    time(&t);
    localtime_r(&t, &hoje);
    
    int anos = hoje.tm_year - nascimento.tm_year;
    int meses = hoje.tm_mon - nascimento.tm_mon;
    int dias = hoje.tm_mday - nascimento.tm_mday;
    
    if (meses < 0 || (meses == 0 && dias < 0)) {
        anos--;
    }
    
    if (meses < 0) {
        meses += 12;
    }
    
    if (dias < 0) {
        time_t um_dia = 24 * 60 * 60;
        hoje.tm_mday -= 1;
        mktime(&hoje);
        dias = (um_dia - nascimento.tm_wday) / um_dia;
    }
    
    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
}

int main() {
    char data_nascimento[11];  // Deve ser no formato "YYYY-MM-DD"
    
    printf("Digite a data de nascimento (YYYY-MM