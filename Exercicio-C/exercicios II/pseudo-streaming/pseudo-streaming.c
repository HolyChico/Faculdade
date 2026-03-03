#include <stdio.h>

int main() {
    int PA, NFP, NSA, SA, UC;
    float valor_plano = 0, valor_avulsos = 0, subtotal = 0, desconto_status = 0, valor_desconto_status = 0;
    float desconto_cupom = 0, taxa_manutencao = 0, bonus_conteudo = 0, valor_total = 0;

    printf("\nDigite o Plano de Assinatura (1-Basico, 2-Padrao, 3-Premium, 4-Sem Plano): ");
    scanf("%d", &PA);

    printf("\nDigite o Numero de Filmes Premium alugados/comprados: ");
    scanf("%d", &NFP);

    printf("\nDigite o Numero de Series Adicionais adquiridas: ");
    scanf("%d", &NSA);

    printf("\nDigite o Status do Assinante (1-Novo, 2-Antigo, 3-Gold): ");
    scanf("%d", &SA);

    printf("\nDeseja usar Cupom? (1-Sim, 0-Nao): ");
    scanf("%d", &UC);

    if (PA == 1) valor_plano = 29.90;
    else if (PA == 2) valor_plano = 49.90;
    else if (PA == 3) valor_plano = 79.90;
    else if (PA == 4) valor_plano = 0.0;
    else {
        printf("\nErro: Plano invalido.");
        return 0;
    }

    valor_avulsos = NFP * 19.90 + NSA * 34.90;

    subtotal = valor_plano + valor_avulsos;

    if (SA == 3) {
        desconto_status = 0.15;
    } 
    else if (SA == 2) {
        desconto_status = 0.05;
    }
    else {
        desconto_status = 0.0;
    }
    valor_desconto_status = subtotal * desconto_status;
    subtotal -= valor_desconto_status;

    if (UC == 1 && subtotal > 50.0) {
        desconto_cupom = 10.0;
        subtotal -= desconto_cupom;
    }

    if ((PA == 2 || PA == 3) && (NFP + NSA > 0)) {
        taxa_manutencao = 5.0;
    } else {
        taxa_manutencao = 0.0;
    }
    subtotal += taxa_manutencao;

    if (subtotal > 100.0 && PA != 1) {
        bonus_conteudo = -7.50;
        subtotal += bonus_conteudo;
    }

    valor_total = subtotal;

    printf("\n--- Fatura ---");
    printf("\nValor do plano: R$ %.2f", valor_plano);
    printf("\nValor dos conteudos avulsos: R$ %.2f", valor_avulsos);
    printf("\nDesconto por status (%.0f%%): R$ %.2f", desconto_status*100, valor_desconto_status);
    if (desconto_cupom > 0)
        printf("\nDesconto de cupom: R$ %.2f", desconto_cupom);
    if (taxa_manutencao > 0)
        printf("\nTaxa de manutencao: R$ %.2f", taxa_manutencao);
    if (bonus_conteudo < 0)
        printf("\nBonus por conteudo: R$ %.2f", bonus_conteudo);

    printf("\nValor total da fatura: R$ %.2f", valor_total);

    return 0;
}