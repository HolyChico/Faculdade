#include <stdio.h>

int main() {
 
    int tesouros_encontrados, armadilhas_ativadas, desafios_superados;
    int condicao_especial;
    char codigo_cenario;

    float pontuacao_bruta, bonus, multiplicador, pontuacao_final;

  
    printf("--- Sistema de Pontuacao de Aventura Magica ---\n");
    
    printf("Digite a quantidade de tesouros, armadilhas e desafios (separados por espaco): ");
    scanf("%d %d %d", &tesouros_encontrados, &armadilhas_ativadas, &desafios_superados);

    printf("Ha uma condicao especial? (1 para Sim, 0 para Nao): ");
    scanf("%d", &condicao_especial);

    printf("Digite o codigo do cenario (A, B ou C): ");
  
    scanf(" %c", &codigo_cenario);

    pontuacao_bruta = (tesouros_encontrados * 100.0) + (armadilhas_ativadas * -50.0) + (desafios_superados * 250.0);

   
    bonus = condicao_especial * 50.0;

 
    multiplicador = (codigo_cenario == 'A') * 1.0 + (codigo_cenario == 'B') * 1.5 + (codigo_cenario == 'C') * 2.0;

   
    pontuacao_final = (pontuacao_bruta + bonus) * multiplicador;

   
    printf("\n--- Relatorio Final ---\n");
    printf("Pontuacao Bruta: %.2f\n", pontuacao_bruta);
    printf("Bonus Aplicado: %.2f\n", bonus);
    printf("Multiplicador do Cenario ('%c'): %.1fx\n", codigo_cenario, multiplicador);
    printf("PONTUACAO FINAL: %.2f\n", pontuacao_final);

    return 0;
}