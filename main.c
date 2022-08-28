#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

1. Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos. Em seguida imprima a matrícula, o nome e a média de cada um deles.

*/
/*
struct Alunos
{
  char name[20];
  int enrollment;
  float n1;
  float n2;
};

int main() {
  int a;
  
  printf("Quantos alunos irão ser cadastrados: ");
  scanf("%d", &a);

  struct Alunos al[a];

  int cont = 0;

  for (int i = 0; i < a; i++)
    {
      printf("Insira o nome do aluno: ");
      scanf("%s", al[i].name);
  
      printf("Insira o número de matrícula do aluno: ");
      scanf("%d", &al[i].enrollment);
  
      printf("Insira a nota da N1: ");
      scanf("%f", &al[i].n1);
  
      printf("Insira a nota da N2: ");
      scanf("%f", &al[i].n2);
    }

  for (int j = 0; j < a; j++)
    {
      printf("\n\nNome do aluno(a): %s", al[j].name);

      printf("\nMatrícula do aluno(a): %d", al[j].enrollment);

      printf("\nMédia do aluno(a): %.2f", (al[j].n1 + al[j].n2) / 2);
    }
}
*/

/*
  Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas. Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF e imprimir o seu IMC.
*/
/*
struct Cadastro
{
  char name[20];
  float height;
  float weight;
  int cpf;
  char genre;
};

int main()
{
  int a;

  printf("Quantas pessoas serão cadastradas?\n");
  scanf("%d", &a);

  struct Cadastro cad[a];

  for (int i = 0; i < a; i++)
    {
      printf("Insira o nome da pessoa: ");
      scanf("%s", cad[i].name);

      printf("Insira o peso da pessoa: ");
      scanf("%f", &cad[i].weight);

      printf("Insira a altura da pessoa: ");
      scanf("%f", &cad[i].height);

      printf("Insira o CPF da pessoa: ");
      scanf("%d", &cad[i].cpf);

      printf("Insira o sexo da pessoa: ");
      scanf("%s", &cad[i].genre);
    }

  int b;
  
  printf("Insira um CPF para saber o IMC da pessoa: ");
  scanf("%d", &b);

  for (int j = 0; j < a; j++)
    {
      if (cad[j].cpf == b)
      {
        float imc = cad[j].weight / (cad[j].height*cad[j].height);
        
        printf("O IMC de %s é: %.2f", cad[j].name, imc);
      }
    }
}
*/

/*
Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista com o código e nome da cada produto. Por último, consulte o preço de um produto através de seu código.
*/
/*
struct Produtos
{
  char name[50];
  int code;
  float price;
};

int main()
{
  int a = 1;
  int cont = 0;
  int x;
  char b, c;
  struct Produtos prod[cont];
  
  while (a > 0)
    {
      printf("Insira o nome do produto: ");
      scanf("%s", prod[cont].name);

      printf("Insira o código do produto: ");
      scanf("%d", &prod[cont].code);

      printf("Insira o preço do produto: ");
      scanf("%f", &prod[cont].price);

      cont++;
      
      printf("\nDeseja adicionar mais um item? (S/N)\n");
      scanf("%s", &b);

      if(tolower(b) == 'n')
      {
        break;
      }
    }

  printf("\nInsira o código do produto paa verificar o seu preço: ");
  scanf("%d", &x);

  for (int i = 0; i < cont; i++)
    {
      if (x == prod[i].code)
      {
        printf("\nO preço de %s é de R$%.2f", prod[i]. name, prod[i].price);
      }
    }
}
*/