#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // aqui vamos guardar as informacoes da primeira carta
  char estado1;
  char codigo1[5];
  char cidade1[20];
  int populacao1;
  float area1;
  double pib1;
  int pontos1;
  

  // aqui vamos guardar as informacoes da segunda carta
  char estado2;
  char codigo2[5];
  char cidade2[20];
  int populacao2;
  float area2;
  double pib2;
  int pontos2;
  

  // agora o programa comeca a pedir os dados
  printf("Carta 1\n");
  printf("Digite o estado:");
  scanf(" %c", &estado1);
  printf("Digite o código: ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  printf("Digite a área: ");
  scanf("%f", &area1);
  printf("Digite o PIB: ");
  scanf("%lf", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos1);

  // agora vem a segunda carta
  printf("\nCarta 2\n");
  printf("Digite o estado: ");
  scanf(" %c", &estado2);
  printf("Digite o código: ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  printf("Digite a área: ");
  scanf("%f", &area2);
  printf("Digite o PIB: ");
  scanf("%lf", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontos2);


  //PIB per Capita
  float pibPerCapita1 = pib1 / (float)populacao1;
  //Densidade Populacional
  float densidade1 = (float)populacao1 / area1;
  
  float pibPerCapita2 = pib2 / (float)populacao2;
  float densidade2 = (float)populacao2 / area2;

  // mostrando tudo que o usuario digitou
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2lf\n", pib1);
  printf("Pontos turísticos: %d\n", pontos1);
  // Saída Densidade Populacional
  printf("Densidade Populacional: %.2f \n", densidade1);
  printf("PIB per Capita: %.2f \n", pibPerCapita1);

  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2lf\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  // Saída // PIB per Capita
  printf("Densidade Populacional: %.2f \n", densidade2);
  printf("PIB per Capita: %.2f \n", pibPerCapita2);

  


  
  






  // fim do programa
  printf("\nIsso é tudo pessoal!\n");
  return 0;
} 
