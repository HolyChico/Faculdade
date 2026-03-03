// Programa 4 (início da entrada de dados do trabalho):

#include <stdio.h> //biblioteca padrão

// ----- função principal -----
int main(void) { // <- "void" diz que não recebe dados

  // tipo de dado criado 
  struct livro{ //cria a estrutura "livro" com: 
    char titulo[200]; // titulo de até 200 caracteres
    char autor[100];  // autor de até 100 caracteres
    int ano_pub;    // ano de publicação do tipo inteiro
    int status_disp;    // disponibilidade do livro, do tipo inteira, 0 ou 1
  };

  typedef struct livro liv; //atalho para o tipo de dado criado

  liv l1; // declara a variável l1 do tipo "livro"

  // entrada de dados
  printf("Digite o titulo: "); // imprime ...
  fgets(l1.titulo,200,stdin); // recebe o título com espaços de até 200 caracteres pelo teclado  (stdin)

  printf("Digite o autor: "); // imprime ...
  fgets(l1.autor,100, stdin);   // recebe o autor com espaços de até 100 caracteres pelo teclado (stdin)

  printf("Digite o ano de publicacao: ");  // imprime ...
  scanf("%d", &l1.ano_pub); // recebe o ano de publicação do livro pelo teclado

  printf("Digite o status: ");  // imprime ...
  scanf ("%d", &l1.status_disp); // recebe o status de disponibilidade com scanf 

  return 0; // fim do programa
}




// Programa 3 (struct) :  

#include <stdio.h> // biblioteca padrão

// ----- função principal -----
int main(void) {  // <- "void" diz que não recebe dados

   struct aluno { // cria a estrutura "aluno" com:
       char nome[70]; //vetor de caracteres para o nome do aluno de até 70 caracteres
       int idade;    // idade do aluno do tipo inteiro
       char telefone[12]; // telefone como vetor de caracteres de até 12 caracteres
   };

   typedef struct aluno tipo; // "atalho" para o struct "aluno" 

   tipo a1, a2; // declara as variáveis a1 e a2 do tipo "aluno"

   // entrada de dados
   printf("Digite o nome do aluno: ");  // imprime ...
   fgets(a1.nome,70,stdin); // recebe o nome com espaços de até 70 caracteres pelo teclado  (stdin)

   printf("Digite o telefone: ");   // imprime ...
   fgets(a1.telefone,12,stdin); // recebe o telefone com espaços de até 12 caracteres pelo teclado (stdin)

   printf("Digite a idade: ");  // imprime ...
   scanf("%d", &a1.idade);  // recebe a idade do aluno com scanf

   a2 = a1; // tenta copiar os dados de a1 para a2, mas não funciona com strings, pois deve ser strcpy
   
   printf("%s \n", a2.nome); // imprime o nome do aluno a2
   printf("%s \n", a2.telefone);    // imprime o telefone do aluno a2  
   printf("%d \n", a2.idade);  // imprime a idade do aluno a2

   return 0; // fim do programa
}


//Programa 2 (funções e matrizes):

#include <stdio.h> // biblioteca padrão

// exibe ao programa a existencia das funções
void inicializa (int mat[2][3]); // inicializa a matriz 2x3
void imprime (int m[2][3]); // imprime a matriz 2x3
void procura (int ma[2][3], int num); // procura o número na matriz 2x3


// ----- função principal -----
int main(void) { // <- "void" diz que não recebe dados

  int matriz[2][3]; // declara a matriz 2x3
  int n;  // declara a variável n do tipo inteiro

  inicializa (matriz); // chama a função "matriz"
  imprime(matriz); // chama a função "imprime"

  //recebe o número a ser procurado
  printf("Numero a ser procurado:"); // imprime ...
  scanf("%d", &n); // recebe o número com scanf

  procura (matriz,n); // chama a função "procura", procurando com o número n
  imprime(matriz); // chama a função "imprime" novamente para mostrar a matriz

  return 0; // fim do programa principal
}


void inicializa (int mat[2][3]) { // void diz que não retorna nada, tipo "nulo". int mat[2][3] é a matriz 2x3 é o que a função recebe.

  int lin, col; // declara lin (linhas) e col (colunas) do tipo inteiro

  for (lin=0; lin<2; lin++) {   // loop para as linhas
    for (col=0; col<3; col++){  // loop para as colunas
      mat[lin][col] = lin+col*col;  // inicia a matriz com um calculo "qualquer"
    }
  }
}


void imprime (int m[2][3]){ // void diz que não retorna nada, int m[2][3] é a matriz 2x3 que a função recebe.

  int i, j; // declara linhas e colunas novamente mas como 'i' e 'j' do tipo inteiro

  for (i=0; i<2; i++) { // loop para as linhas
    for (j=0; j<3; j++) { // loop para as colunas
      printf("%d ", m[i][j]);   // imprime a linha i e coluna j da matriz
    }
    printf("\n"); // pula para a próxima linha após imprimir uma linha completa
  }
  // nao retorna nada
} 


void procura (int ma[2][3], int num){ // void diz que não retorna nada, int ma[2][3] é a matriz 2x3 e int num é o número a ser procurado que a função recebe.

  int i, j, x=0; // declara linhas (i), colunas (j) e x o "sinal" pra encontrado. todos do tipo inteiro.

  for (i=0; i<2; i++){ // loop para as linhas
    for (j=0; j<3; j++) { // loop para as colunas

      if (ma[i][j] == num){ // se o número na linha i e coluna j for igual ao número procurado
        printf("Num encontrado na posicao [%d, %d]\n", i, j);   // imprime a posição onde o número foi encontrado
        x=1; // muda o sinal pra "encontrado"

        ma[i][j] = 10; // altera o valor na posição encontrada para 10
      }
    }
  }

  if (x == 0) { // se o sinal ainda for 0 não encontrou.
    printf("Numero nao encontrado\n"); // imprime ... caso não tenha encontrado
  }
  // nao retorna nada
}



// Programa 1 (funções):

#include <stdio.h> // biblioteca padrão

// informa ao programa a existencia das funções:
int soma(int a, int b); // func soma; que recebe dois inteiros (a e b) e retorna um inteiro
int subtracao (int c, int d); // func subtração; que recebe dois inteiros (c e d) e retorna um inteiro

int main(void) {  // <- "void" diz que não recebe dados

  int num1, num2, resultado;  // declara as variáveis num1, num2 e resultado do tipo inteiro
  int opcao=0;  // declara a variável opção do tipo inteiro e inicia com 0

  while (opcao != 3) { // loop enquanto a opção for diferente de 3 (sair)

    // printa o menu de opções
    printf("Opcoes: \n");
    printf("1. soma\n");
    printf("2. subtracao\n");
    printf("3. sair\n");
    printf("Digite sua opcao: ");

        scanf("%d", &opcao); // recebe a opção do usuário com scanf

    switch (opcao) {    //switch para as opções

      case 1: // se a opção for 1 (soma)
        //recebe dados
        printf("Digite um num: "); // imprime ...
            scanf("%d", &num1); // recebe o primeiro número

        printf("Digite um num: "); // imprime ...
            scanf("%d", &num2); // recebe o segundo número

        resultado = soma(num1, num2);  // chama e recebe o resultado da função soma com num1 e num2

        printf("Resultado = %d\n", resultado);  // imprime o resultado da soma

        break;  // finaliza o case 1

      case 2:   // se a opção for 2 (subtração)
        //recebe dados
        printf("Digite um num: ");  // imprime ...
            scanf("%d", &num1); // recebe o primeiro número

        printf("Digite um num: ");  // imprime ...
            scanf("%d", &num2); // recebe o segundo número

        resultado = subtracao(num1, num2);  // chama e recebe o resultado da função subtração com num1 e num2

        printf("Resultado = %d\n", resultado);  // imprime o resultado da subtração

        break;  // finaliza o case 2


      default: // se a opção for diferente de 1, 2 ou 3
        printf("opcao invalida"); // imprime ...

        break;  // finaliza o default

    }   // fim do switch
}   // fim do while

  return 0; // fim do programa principal
}

int soma(int a, int b){ // int diz que retorna um inteiro, 'int a' e 'int b' são os dois inteiros que a função recebe.

  int r; // declara a variável r (para resultado) do tipo inteiro

  r = a + b;  // realiza a soma de a e b e armazena em r

  return r; // retorna o valor de r para quem chamou a função
}

int subtracao (int c, int d) {  // int diz que retorna um inteiro, 'int c' e 'int d' são os dois inteiros que a função recebe.
    // diferente de soma, não usa variável intermediária, apenas retorna o resultado diretamente (c - d)
  return c - d; // retorna o resultado da subtração de c e d para quem chamou a função
}
