#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  
// carta01//

char estado01[50];
char codigo01[5];
char nomecidade01[50];
int populacao01;
float area01;
float pib01;
int pontosturisticos01;

// Área para entrada de dados
 
 printf("Cadastramento de carta 01 \n \n");

 printf("Digite o estado: ");
 scanf("%s", &estado01);

 printf("Digite o codigo da carta (ex: A01): ");
 scanf("%s", &codigo01);

 printf("Digite o nome da cidade: ");
 scanf("%s", nomecidade01);

 printf("Digite a populacao: ");
 scanf("%d", &populacao01);

 printf("Digite a area km2: ");
 scanf("%f", &area01);

 printf("Digite o PIB: ");
 scanf("%f", &pib01);

 printf("Digite o numero de pontos turisticos: ");
 scanf("%d", &pontosturisticos01);

// Área para exibição dos dados da cidade

 printf("Carta 01:  \n");
 printf("Estado: %s \n", estado01);
 printf("Codigo: %s \n", codigo01);
 printf("Nome da Cidade: %s \n", nomecidade01);
 printf("Populacao: %d \n", populacao01);
 printf("Area: %.2f km2 \n", area01);
 printf("PIB: %.2f \n", pib01);
 printf("Numero de Pontos Turisticos: %d \n \n", pontosturisticos01);


// Área para definição das variáveis para armazenar as propriedades das cidades
  
// carta01//

 char estado02[50];
 char codigo02[5];
 char nomecidade02[50];
 int populacao02;
 float area02;
 float pib02;
 int pontosturisticos02;
  
// Área para entrada de dados
   
 printf("Cadastramento de carta 02 \n \n");

 printf("Digite o estado: ");
 scanf("%s", &estado02);

 printf("Digite o codigo da carta (ex: A02): ");
 scanf("%s", &codigo02);

 printf("Digite o nome da cidade: ");
 scanf("%s", nomecidade02);

 printf("Digite a populacao: ");
 scanf("%d", &populacao02);

 printf("Digite a area km2: ");
 scanf("%f", &area02);

 printf("Digite o PIB: ");
 scanf("%f", &pib02);

 printf("Digite o numero de pontos turisticos: ");
 scanf("%d", &pontosturisticos02);

// Área para exibição dos dados da cidade

 printf("Carta 02:  \n");
 printf("Estado: %s \n", estado02);
 printf("Codigo: %s \n", codigo02);
 printf("Nome da Cidade: %s \n", nomecidade02);
 printf("Populacao: %d \n", populacao02);
 printf("Area: %.2f km2 \n", area02);
 printf("PIB: %.2f \n", pib02);
 printf("Numero de Pontos Turisticos: %d \n \n", pontosturisticos02);


return 0;
} 
