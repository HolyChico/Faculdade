// bibliotecas -
#include <stdio.h> // de entrada e saida
#include <string.h> // de manipulacao de strings

// bibliotecas "extra" -
#include <stdlib.h> // de utilitarios // usaremos "system("cls");"
#include <windows.h> // do windows // usaremos "sleep(2000);"

// constantes e estruturas
#define max_livros 10 // define numero maximo de livros na biblioteca

struct livro { // estrutura para armazenar dados do livro
    char titulo[100]; // string para o titulo
    char autor[100]; // string para o autor
    int ano_publicacao; // inteiro para o ano
    int ativo; // 1 para ativo, 0 para removido
};


// array global para armazenar os livros
struct livro biblioteca[max_livros]; // array de livros
int total_livros = 0; // contador de livros cadastrados, variavel global


// informa funcoes existentes:
void limpa_buffer(void); // funcao para limpar o buffer do teclado "mais facil" (evita erro com scanf + fgets)
void cadastrar_livro(void); // funcao de cadastro
void consultar_livro(void); // funcao de consulta
void atualizar_livro(void); // funcao de atualizacao
void gerar_relatorios(void); //  funcao de relatorios

// ----- funcao principal -----

int main(void) { // inicio da funcao principal
    // variaveis
    int opcao = 1; // escolha do usuario do menu

    do { // inicio loop do-while

        // menu
        system("cls"); // limpa a tela
        printf("----- menu -----\n"); // titulo do menu
        printf("[1] - cadastrar livro \n"); // opcao 1
        printf("[2] - consultar livro\n"); // opcao 2
        printf("[3] - atualizar livro\n"); // opcao 3
        printf("[4] - gerar relatorios\n"); // opcao 4
        printf("[0] - sair\n"); // opcao 0
        printf("---------------------\n"); // divisão do menu
        Sleep(750); // pausa de 0,75 seg

        printf("escolha uma opcao: "); // selecao do usuario
        scanf("%d", &opcao); // le a opcao do usuario

        // opcoes do menu
        switch (opcao) { 
            case 1: // cadastrar livro
                cadastrar_livro(); // funcao
                break; 
            case 2: // consultar livro
                consultar_livro(); // funcao
                break; 
            case 3: // atualizar livro
                atualizar_livro(); // funcao
                break; 
            case 4: // gerar relatorios
                gerar_relatorios(); // funcao
                break; 
            case 0: // sair
                break;

            default: // qualquer numero diferente de 0 a 4
                printf("opcao invalida. tente novamente.\n"); // mensagem de erro
                Sleep(750); //pausa de 0,75 seg
                break; 
        }

    } while (opcao != 0); // fim do loop do-while (caso opcao seja 0)
    printf("encerrando o programa...\n"); // mensagem de saida

    return 0; // retorna 0 (sucesso)
} // fim do codigo principal


// ----- funcoes -----

// funcao para limpar o buffer do teclado
void limpa_buffer(void) {
    int c; // variavel temporaria para o caractere
    while ((c = getchar()) != '\n' && c != EOF); // limpa ate o fim da linha
}


// funcao para cadastrar um livro
void cadastrar_livro(void) {
    system("cls"); // limpa a tela
    Sleep(750); // pausa de 0,75 seg

    if (total_livros >= max_livros) { // verifica se a biblioteca esta cheia
        printf("capacidade maxima de livros atingida.\n");  // mensagem de erro
        Sleep(750); // pausa de 0,75 seg
        return; // sai da funcao
    }

    struct livro novo_livro; // variavel temporaria para o novo livro

    limpa_buffer(); // limpa o "buffer" antes de ler os dados, evita erros com scanf-fgets

    printf("digite o titulo do livro: "); // pede o titulo
    fgets(novo_livro.titulo, 100, stdin); // le o titulo com limite 100 caracteres atraves do teclado
    novo_livro.titulo[strcspn(novo_livro.titulo, "\n")] = 0; // remove o '\n' do fgets

    printf("digite o autor do livro: "); // pede o autor
    fgets(novo_livro.autor, 100, stdin); // le o autor com limite 100 caracteres atraves do teclado
    novo_livro.autor[strcspn(novo_livro.autor, "\n")] = 0; // remove o '\n' do fgets

    printf("digite o ano de publicacao: "); // pede o ano
    scanf("%d", &novo_livro.ano_publicacao); // le o ano

    novo_livro.ativo = 1; // livro ativo

    biblioteca[total_livros] = novo_livro; // adiciona o novo livro ao array
    total_livros++; // incrementa o contador de livros

    printf("livro cadastrado com sucesso.\n");  // mensagem de sucesso
    printf("total de livros: %d\n", total_livros); // mostra o total

    Sleep(1000); // pausa de 1 seg
}


// funcao para consultar um livro
void consultar_livro(void) {
    system("cls"); // limpa a tela
    Sleep(750); // pausa de 0,75 seg
    int opcao; // variavel escolha do usuario do menu

    do { // inicio do loop do-while do menu de consulta
        system("cls"); // limpa a tela

        printf("----- consulta livro -----\n"); // titulo do menu
        printf("[1] - busca por titulo\n"); // opcao 1
        printf("[2] - busca por autor\n"); // opcao 2
        printf("[3] - busca por ano\n"); // opcao 3
        printf("[4] - ver todos os livros\n"); // opcao 4
        printf("[0] - voltar ao menu\n"); // opcao 0
        printf("--------------------------\n"); // divisor

        Sleep(750); // pausa de 0,75 seg

        printf("escolha uma opcao: "); // selecao do usuario
        scanf("%d", &opcao); // le a opcao
        limpa_buffer(); // limpa o buffer apos o scanf, para o proximo fgets funcionar

        int encontrado = 0; // flag para saber se achamos algo
        int i; // contador do loop

        switch (opcao) { // inicio do switch
            case 1: { // busca por titulo
                char busca_titulo[100]; // string para a busca
                printf("digite o titulo (ou parte) para buscar: "); // pede o titulo
                fgets(busca_titulo, 100, stdin); // le a busca
                busca_titulo[strcspn(busca_titulo, "\n")] = 0; // remove o '\n'

                system("cls"); // limpa a tela
                printf("----- resultados da busca por titulo -----\n"); // titulo dos resultados
                for (i = 0; i < total_livros; i++) { // loop para procurar
                    if (biblioteca[i].ativo == 1 && strstr(biblioteca[i].titulo, busca_titulo) != NULL) { // condicao de busca
                        printf("titulo: %s\n", biblioteca[i].titulo); // mostra titulo
                        printf("autor: %s\n", biblioteca[i].autor); // mostra autor
                        printf("ano: %d\n", biblioteca[i].ano_publicacao); // mostra ano
                        printf("----------------------------------------\n"); // divisor
                        encontrado = 1; // marca como encontrado
                    }
                }
                if (!encontrado) { // se nao achou
                    printf("nenhum livro encontrado com esse titulo.\n"); // mensagem de erro
                }
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 1
            }

            case 2: { // busca por autor
                char busca_autor[100]; // string para a busca
                printf("digite o autor (ou parte) para buscar: "); // pede o autor
                fgets(busca_autor, 100, stdin); // le a busca
                busca_autor[strcspn(busca_autor, "\n")] = 0; // remove o '\n'

                system("cls"); // limpa a tela
                printf("----- resultados da busca por autor -----\n"); // titulo dos resultados
                for (i = 0; i < total_livros; i++) { // loop para procurar
                    if (biblioteca[i].ativo == 1 && strstr(biblioteca[i].autor, busca_autor) != NULL) { // condicao de busca
                        printf("titulo: %s\n", biblioteca[i].titulo); // mostra titulo
                        printf("autor: %s\n", biblioteca[i].autor); // mostra autor
                        printf("ano: %d\n", biblioteca[i].ano_publicacao); // mostra ano
                        printf("----------------------------------------\n"); // divisor
                        encontrado = 1; // marca como encontrado
                    }
                }
                if (!encontrado) { // se nao achou
                    printf("nenhum livro encontrado desse autor.\n"); // mensagem de erro
                }
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 2
            }

            case 3: { // busca por ano
                int busca_ano; // inteiro para a busca
                printf("digite o ano de publicacao para buscar: "); // pede o ano
                scanf("%d", &busca_ano); // le a busca
                limpa_buffer(); // limpa o buffer

                system("cls"); // limpa a tela
                printf("----- resultados da busca por ano (%d) -----\n", busca_ano); // titulo dos resultados
                for (i = 0; i < total_livros; i++) { // loop para procurar
                    if (biblioteca[i].ativo == 1 && biblioteca[i].ano_publicacao == busca_ano) { // condicao de busca
                        printf("titulo: %s\n", biblioteca[i].titulo); // mostra titulo
                        printf("autor: %s\n", biblioteca[i].autor); // mostra autor
                        printf("ano: %d\n", biblioteca[i].ano_publicacao); // mostra ano
                        printf("----------------------------------------\n"); // divisor
                        encontrado = 1; // marca como encontrado
                    }
                }
                if (!encontrado) { // se nao achou
                    printf("nenhum livro encontrado desse ano.\n"); // mensagem de erro
                }
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 3
            }
            
            case 4: { // ver todos
                system("cls"); // limpa a tela
                printf("----- relatorio: todos os livros ativos -----\n"); // titulo dos resultados
                for (i = 0; i < total_livros; i++) { // loop para mostrar todos
                    if (biblioteca[i].ativo == 1) { // so mostra os ativos
                        printf("titulo: %s\n", biblioteca[i].titulo); // mostra titulo
                        printf("autor: %s\n", biblioteca[i].autor); // mostra autor
                        printf("ano: %d\n", biblioteca[i].ano_publicacao); // mostra ano
                        printf("----------------------------------------\n"); // divisor
                        encontrado = 1; // marca como encontrado
                    }
                }
                if (!encontrado) { // se nao achou
                    printf("nenhum livro ativo cadastrado.\n"); // mensagem de erro
                }
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 4
            }

            case 0: // voltar ao menu
                break; // fim do case 0

            default: // qualquer numero diferente de 0 a 4
                printf("opcao invalida. tente novamente.\n");  // mensagem de erro
                Sleep(750); //pausa de 0,75 seg
                break; // fim do default
        } // fim do switch
    } while (opcao != 0); // fim do loop
    printf("voltando ao menu principal...\n"); // mensagem de saida
    Sleep(750); // pausa de 0,75 seg
}


// funcao para atualizar um livro
void atualizar_livro(void) {
    system("cls"); // limpa a tela
    char busca_titulo[100]; // string para a busca
    int encontrado = 0; // flag para saber se achamos algo
    int id_atualizar = -1; // variavel para guardar o indice // inicia com indice -1, pois n é possivel achar indice -1 "naturalmente"
    int i; // contador do loop

    limpa_buffer(); // limpa o buffer antes de ler os dados scanf - fgets
    printf("digite o titulo do livro que deseja atualizar: "); // pede o titulo
    fgets(busca_titulo, 100, stdin); // le a busca
    busca_titulo[strcspn(busca_titulo, "\n")] = 0; // remove o '\n'

    for (i = 0; i < total_livros; i++) { // loop para procurar
        if (biblioteca[i].ativo == 1 && strstr(biblioteca[i].titulo, busca_titulo) != NULL) { // condicao de busca
            printf("livro encontrado:\n"); // mensagem
            printf("titulo: %s\n", biblioteca[i].titulo); // mostra titulo
            printf("autor: %s\n", biblioteca[i].autor); // mostra autor
            printf("ano: %d\n", biblioteca[i].ano_publicacao); // mostra ano
            id_atualizar = i; // guarda o indice
            encontrado = 1; // marca como encontrado
            break; // para o loop
        }
    }

    if (!encontrado) { // se nao achou
        printf("livro nao encontrado.\n"); // mensagem de erro
    } else { // se achou
        printf("\n--- insira os novos dados ---\n"); // titulo
        printf("novo titulo: "); // pede novo titulo
        fgets(biblioteca[id_atualizar].titulo, 100, stdin); // le o novo titulo
        biblioteca[id_atualizar].titulo[strcspn(biblioteca[id_atualizar].titulo, "\n")] = 0; // remove o '\n'

        printf("novo autor: "); // pede novo autor
        fgets(biblioteca[id_atualizar].autor, 100, stdin); // le o novo autor
        biblioteca[id_atualizar].autor[strcspn(biblioteca[id_atualizar].autor, "\n")] = 0; // remove o '\n'

        printf("novo ano de publicacao: "); // pede novo ano
        scanf("%d", &biblioteca[id_atualizar].ano_publicacao); // le o novo ano

        limpa_buffer(); // limpa o buffer

        printf("livro atualizado com sucesso.\n");  // mensagem de sucesso
    }
    Sleep(1500); // pausa de 1,5 seg
}


// funcao para gerar relatorios
void gerar_relatorios(void) {
    system("cls"); // limpa a tela
    Sleep(750); // pausa de 0,75 seg
    int opcao; // escolha do usuario

    do { // inicio do loop do menu
        system("cls"); // limpa a tela
        printf("----- relatorios -----\n"); // titulo
        printf("[1] - listar todos os livros ativos\n"); // opcao 1
        printf("[2] - consultar autor de um livro\n"); // opcao 2
        printf("[3] - contar livros por ano\n"); // opcao 3
        printf("[4] - listar todos os autores (com repeticao)\n"); // opcao 4
        printf("[0] - voltar ao menu\n"); // opcao 0
        printf("----------------------\n"); // divisor
        printf("escolha uma opcao: "); // selecao do usuario
        scanf("%d", &opcao); // le a opcao
        limpa_buffer(); // limpa o buffer

        int encontrado = 0; // variavel para indicar
        int i; // contador do loop

        switch (opcao) { // inicio do switch
            case 1: // listar todos
                system("cls"); // limpa a tela
                printf("----- relatorio: todos os livros ativos -----\n"); // titulo
                for (i = 0; i < total_livros; i++) { // loop para mostrar todos
                    if (biblioteca[i].ativo == 1) { // mostra os ativos
                        printf("titulo: %s\n", biblioteca[i].titulo); // mostra titulo
                        printf("autor: %s\n", biblioteca[i].autor); // mostra autor
                        printf("ano: %d\n", biblioteca[i].ano_publicacao); // mostra ano
                        printf("----------------------------------------\n"); // divisor
                        encontrado = 1; // marca como encontrado
                    }
                }
                if (!encontrado) { // se nao achou
                    printf("nenhum livro ativo cadastrado.\n"); // mensagem de erro
                }
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 1

            case 2: { // consultar autor de um livro
                char busca_titulo[100]; // string para a busca
                system("cls"); // limpa a tela
                printf("----- relatorio: autor por livro -----\n"); // titulo
                printf("digite o titulo (ou parte) do livro: "); // pede o titulo
                fgets(busca_titulo, 100, stdin); // le a busca
                busca_titulo[strcspn(busca_titulo, "\n")] = 0; // remove o '\n'
                
                printf("\n----- resultados -----\n"); // titulo
                for (i = 0; i < total_livros; i++) { // loop para procurar
                    if (biblioteca[i].ativo == 1 && strstr(biblioteca[i].titulo, busca_titulo) != NULL) { // condicao de busca
                        printf("livro: %s\n", biblioteca[i].titulo); // mostra titulo
                        printf("autor: %s\n", biblioteca[i].autor); // mostra autor
                        printf("----------------------------------------\n"); // divisor
                        encontrado = 1; // marca como encontrado
                    }
                }
                if (!encontrado) { // se nao achou
                    printf("nenhum livro encontrado com esse titulo.\n"); // mensagem de erro
                }
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 2
            }

            case 3: { // contar livros por ano
                int busca_ano; // inteiro para a busca
                int contador = 0; // contador para os livros
                system("cls"); // limpa a tela
                printf("----- relatorio: livros por ano -----\n"); // titulo
                printf("digite o ano de publicacao: "); // pede o ano
                scanf("%d", &busca_ano); // le o ano
                limpa_buffer(); // limpa o buffer
                
                printf("\n----- livros de %d -----\n", busca_ano); // titulo
                for (i = 0; i < total_livros; i++) { // loop para procurar
                    if (biblioteca[i].ativo == 1 && biblioteca[i].ano_publicacao == busca_ano) { // condicao de busca
                        printf(" - %s (%s)\n", biblioteca[i].titulo, biblioteca[i].autor); // mostra o livro
                        contador++; // incrementa o contador
                        encontrado = 1; // marca como encontrado
                    }
                }
                
                if (!encontrado) { // se nao achou
                    printf("nenhum livro encontrado para este ano.\n"); // mensagem de erro
                }
                
                printf("\ntotal de livros em %d: %d\n", busca_ano, contador); // mostra o total
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 3
            }

            case 4: { // listar todos os autores
                system("cls"); // limpa a tela
                printf("----- relatorio: lista de todos os autores -----\n"); // titulo
                
                for (i = 0; i < total_livros; i++) { // loop principal (livros)
                    if (biblioteca[i].ativo == 1) { // so checa livros ativos
                        printf(" - %s\n", biblioteca[i].autor); // imprime o autor (mesmo se repetido)
                        encontrado = 1; // marca que encontrou pelo menos um
                    }
                }
                
                if (!encontrado) { // se o total for 0
                    printf("nenhum autor cadastrado.\n"); // mensagem de erro
                }
                
                Sleep(3000); // pausa de 3 segundos
                break; // fim do case 4
            }

            case 0: // voltar ao menu
                break; // fim do case 0

            default: // qualquer numero diferente
                printf("opcao invalida.\n");  // mensagem de erro
                Sleep(750); // pausa de 0,75 seg
                break; // fim do default
        } // fim do switch

    } while (opcao != 0); // fim do loop

    printf("voltando ao menu principal...\n"); // mensagem de saida
    Sleep(750); // pausa de 0,75 seg
}