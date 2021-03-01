//
// Calcula a tabela-verdade para uma fórmula fixa
//

#include <stdio.h>

#define TRUE              1
#define FALSE             0

// macro para calcular o valor da implicacao
#define IMP(b1, b2)       (b1 && !b2 ? FALSE : TRUE)

//
// A fórmula calculada pelo codigo e'
// (P -> Q) /\ (~Q \/ P)
//

// numero de variaveis proposicionais na formula
#define VARS              2

// constantes para os indices das tres variaveis
#define P                 0
#define Q                 1


// representacao da formula
char nome[VARS];     // nome das variaveis
int I[VARS];         // interpretacao das variaveis
static int contafalsos=0;

void inicializa_formula()
{
  nome[P] = 'P';
  nome[Q] = 'Q';

  int c = 0;
  for (c; c < VARS; c++)
    I[c] = FALSE;
}

// retorna TRUE se a interpretacao atual eh a ultima na tabela-verdade
int ultima_interpretacao()
{
  int res = 1;
  int c = 0;
  for (c; c < VARS; c++) {
    res = res && I[c];
  }

  return res;
}

// altera a interpretacao atual no array I[] para a proxima na
// ordem da tabela-verdade
void proxima_interpretacao()
{
  int c = VARS - 1;

  while (c >= 0 && I[c] != 0) {
    I[c--] = 0;
  }

  if (c >= 0)
    I[c] = 1;
}

int valor_formula()
{
  return (IMP(I[P], I[Q]) || I[P] )&& (!I[Q] || I[P]);

}

void mostra_tabela()
{
  int fim = FALSE;

  inicializa_formula();

  printf("Formula:\n");
  printf("H = ((P -> Q) \\/ P) /\\ (!Q \\/ P) \n\n");

  printf("Calculando todas as %d possibilidades\n\n",1<<VARS);
  int c = 0;
  for (c=0; c < VARS; c++) {
    printf(" %c |", nome[c]);
  }
  printf(" H\n");
  for (c=0; c < 4 * VARS + 2; c++)
    printf("-");
  printf("\n");
  while (!fim) {
    // imprime valores atuais das variaveis
    int c = 0;
    for (c = 0; c < VARS; c++) {
      if (I[c])
        printf(" T |");
      else
        printf(" F |");
    }

    // calcula e imprime o valor da formula
    if (valor_formula()){
      printf(" T\n");
      }
    else{
      printf(" F\n");
      contafalsos++;
    }
    // verifica se acabou a tabela ou passa para
    // a proxima linha
    if (ultima_interpretacao())
      fim = TRUE;
    else
      proxima_interpretacao();
  }
}

int main()
{
  printf("Calculo de tabela-verdade\n\n");

  mostra_tabela();

  if(contafalsos > 0){printf("\nA formula nao e tautologia\n");}
  else{printf("\nA formula e tautologia\n");}
  if(contafalsos < (1<<VARS)){printf("\nA formula e satisfazivel \n");}
  else{
    printf("\nA formula nao e satisfazivel \n");
  }
  return 0;
}
