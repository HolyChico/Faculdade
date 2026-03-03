#include <stdio.h>

int main() {
    int total_segundos;
    int semanas, dias, horas, minutos, segundos, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &total_segundos);

    semanas = total_segundos / 604800;   
    resto = total_segundos % 604800;

    dias = resto / 86400;                 
    resto = resto % 86400;

    horas = resto / 3600;                
    resto = resto % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("\n%d semanas, %d dias, %d horas, %d minutos e %d segundos", semanas, dias, horas, minutos, segundos);

    return 0;
}