#include <stdio.h>
#include <string.h>

int main() {
   
  char estado1;
  char codigo1 [4];
  char cidade1 [50];
  int populacao1;
  int pontos_turisticos1;
  float area1;
  float pib1;
 

  char estado2;
  char codigo2 [4];
  char cidade2 [50];
  int populacao2;
  int pontos_turisticos2;
  float area2;
  float pib2;
 
printf("=== SUPER TRUNFO- CADASTRO DE CARTAS ===\n");

printf("=== CARTA 1 ===\n");
  

  printf("Digite o estado (A-H):\n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta(ex: A01):\n");
  scanf(" %s", codigo1);

  printf("Digite o nome da Cidade:");
  scanf(" %[^\n]", cidade1 );

  printf("Digite a população total:\n");
  scanf(" %d", &populacao1);

  printf("Digite a área(km²):\n");
  scanf(" %f", &area1);

  printf("Digite o PIB (bilhões de reais):\n");
  scanf(" %f",&pib1);

  printf("Digite o número de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos1);


  printf(" ===CARTA 2 ===\n");
  

  printf("Digite o estado (A-H):\n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta(ex: A01):\n");
  scanf(" %s", codigo2);

  printf("Digite o nome da Cidade:");
  scanf(" %[^\n]", cidade2 );

  printf("Digite a população total: \n");
  scanf(" %d", &populacao2);

  printf("Digite a área(km²):\n");
  scanf(" %f", &area2);

  printf("Digite o PIB (bilhões de reais):\n");
  scanf(" %f",&pib2);

  printf("Digite o número de pontos turísticos: \n");
  scanf(" %d", &pontos_turisticos2);
 
 
 // CÁLCULOS //
 
 float densidade_populacional1 = populacao1 / area1;
 float densidade_populacional2 = populacao2 / area2;

 float pib_per_capita1 = (pib1 * 1000000000 ) / populacao1; 
 float pib_per_capita2 = (pib2 * 1000000000) / populacao2;


  printf("\n\n === CARTAS CADASTRADAS ===\n\n");


 printf("Carta 1 \n");
 printf("Estado: %c \n", estado1);
 printf("Código da Carta: %s \n", codigo1);
 printf("Cidade: %s\n", cidade1);
 printf("Habitantes: %d \n", populacao1);
 printf("Área: %.2f\n", area1);
 printf("Pib: %.2f\n",pib1);
 printf("Pontos Turisticos: %d\n", pontos_turisticos1);
 printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
 printf("PIB per capita: %.2f\n", pib_per_capita1);


 printf("\n");

 printf("Carta 2 \n");

 printf("Estado: %c\n", estado2);
 printf("Código da Carta: %s\n", codigo2);
 printf("Cidade: %s\n", cidade2);
 printf("Habitantes: %d \n", populacao2);
 printf("Área: %.2f\n", area2);
 printf("Pib: %02f\n",pib2);
 printf("Pontos Turisticos: %d\n", pontos_turisticos2);
 printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
 printf("PIB per capita: %.2f\n", pib_per_capita2);


 printf("\nPrograma finalizado com sucesso!\n");


 return 0;



}
  

