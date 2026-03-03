#include <stdio.h>

int main() {
    int tarefas_concluidas, projetos_iniciados, faltas, horas_extras;
    float pontuacao_produtividade;

    const float peso_tarefa = 1.2;
    const float peso_projeto = 3.5;
    const float penalidade_falta = 25.0;
    const float bonus_hora_extra = 0.8;

    printf("Digite o numero de tarefas concluidas: ");
    scanf("%d", &tarefas_concluidas);

    printf("Digite o numero de projetos iniciados: ");
    scanf("%d", &projetos_iniciados);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    printf("Digite o numero de horas extras: ");
    scanf("%d", &horas_extras);

    pontuacao_produtividade = 
        (tarefas_concluidas * peso_tarefa) +
        (projetos_iniciados * peso_projeto) -
        (faltas * penalidade_falta) +
        (horas_extras * bonus_hora_extra);

    printf("Pontuacao de Produtividade: %.2f\n", pontuacao_produtividade);

    return 0;
}