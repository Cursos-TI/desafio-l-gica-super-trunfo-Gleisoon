#include <stdio.h>
 float calcularPibPerCapita(float pib, int populacao)
{
    return pib / populacao;
}
float calcularDensidadePopulacional(int populacao, float area)
{
    return 1 / (populacao / area);
}
float calcularsuperPoder(int populacao, float area, float pib, int numeros_pontos_turisticos, float pibPerCapita, float DensidadePopulacional)
{
    return populacao + area + pib + numeros_pontos_turisticos + calcularPibPerCapita(pib, populacao) + calcularDensidadePopulacional(populacao, area);
}

int main(){

  unsigned int populacao01, populacao02;
  int numeros_pontos_turisticos01, numeros_pontos_turisticos02;
  float pib01, pib02;
  float area01, area02;
  char codigo01[4];
  char codigo02[4];
  char cidade01[50];
  char cidade02[50];
  float densidade_populaciona1, densidade_populacional2;
  float pib_per_capita1, pib_per_capita2;
  char estado01[50];
  char estado02[50];
  float superPoder1, superPoder2;
  // float densidadepopulacional2 = (Populacao02 / area01)
  
  printf("\nBem-vindo ao jogo de Super Trunfo\n");
  printf("Dados da Carta 01\n\n");

  printf("Estado:");
  scanf("%s", estado01);

  printf("Cidade:");
  scanf("%s", cidade01);

  printf("Codigo da carta:");
  scanf("%s", codigo01);

  printf("Area(km):");
  scanf("%f", &area01);

  printf("Populacao:");
  scanf("%d", &populacao01);

  printf("Pontos turisticos:");
  scanf("%d", &numeros_pontos_turisticos01);

  printf("Pib:");
  scanf("%f", &pib01);

 printf("\nDados das Carta 2\n\n");

 printf("Estado:");
  scanf("%s", estado02);

  printf("Cidade:");
  scanf("%s", cidade02);

  printf("Codigo da carta:");
  scanf("%s", codigo02);

  printf("Area(km):");
  scanf("%f", &area02);

  printf("Populacao:");
  scanf("%d", &populacao02);

  printf("Pontos turisticos:");
  scanf("%d", &numeros_pontos_turisticos02);

  printf("Pib:");
  scanf("%f", &pib02);

  // Cálculo para Carta 1
   densidade_populaciona1 = (float)populacao01 / area01; // Densidade populacional
   pib_per_capita1 = pib01 / populacao01; // PIB per capita


  //Cálculo para Carta 2
   densidade_populacional2 = (float)populacao02 / area02; // Densidade populacional
   pib_per_capita2 = pib02 / populacao02; // PIB per capita

  // Cálcular Super Poder

  superPoder1 = populacao01 + area01 + pib01 + numeros_pontos_turisticos01 + pib_per_capita1 + (1.0 / densidade_populaciona1);
  superPoder2 = populacao02 + area02 + pib02 + numeros_pontos_turisticos02 + pib_per_capita2 + (1.0 / densidade_populacional2);


   // Exibir os dados cadastrados da carta 1
   printf("\nDados da Carta 1:\n");
   printf("Estado: %s\n", estado01);
   printf("Cidade: %s\n", cidade01);
   printf("Codigo da Carta: %s\n", codigo01);
   printf("Area: %.2f km²\n", area01);
   printf("Populacao: %d\n", populacao01);
   printf("Pontos turisticos: %d\n", numeros_pontos_turisticos01);
   printf("Pib: %.2f\n", pib01);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade_populaciona1);
   printf("Pib per Capita: %.2f\n", pib_per_capita1);
   printf("Super Poder da Carta 1: %f\n", superPoder1);

  // Exibir os dados cadastrados da carta 2
   printf("\nDados da Carta 2:\n");
   printf("Estado: %s\n", estado02);
   printf("Cidade: %s\n", cidade02);
   printf("Codigo da Carta: %s\n", codigo02);
   printf("Area: %.2f km²\n", area02);
   printf("Populacao: %d\n", populacao02);
   printf("Pontos turisticos: %d\n", numeros_pontos_turisticos02);
   printf("Pib: %.2f\n", pib02);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
   printf("Pib per Capita: %.2f\n", pib_per_capita2);
   printf("Super Poder da Carta 2: %f\n", superPoder2);
  
   printf("\n ***************************\n");

   printf("Cartas Cadastradas com Sucesso \n");

   printf("********************************\n");

   printf("Vamos descobrir a Carta Vencedora? \n\n");

   //Resultados

int VencedorPopulacao = populacao01 > populacao02;
int VencedorArea = area01 > area02;
int VencedorPIB = pib01 > pib02;
int VencedorPontosTuristicos = numeros_pontos_turisticos01 > numeros_pontos_turisticos02;
int VencedorDensidadePopulacional = calcularDensidadePopulacional(populacao01, area01) > calcularDensidadePopulacional(populacao02, area02);
int VencedorPibPerCapita = calcularPibPerCapita(pib01, populacao01) > calcularPibPerCapita(pib02, populacao02);
int VencedorsuperPoder = superPoder1 > superPoder2;


  //Comparação das Cartas

  printf("População da Carta Vencedora? (%d) \n", VencedorPopulacao);
  printf("Area da Carta Vencedora? (%d) \n", VencedorArea);
  printf("Pib da Carta Vencedora? (%d) \n", VencedorPIB);
  printf("Pontos Turisticos da Carta Vencedora? (%d) \n", VencedorPontosTuristicos);
  printf("Densidade populacional da Carta Vencedora? (%d) \n", VencedorDensidadePopulacional);
  printf("Pib Per Capita da Carta Vencedora? (%d) \n", VencedorPibPerCapita);
  printf("Super Poder da Carta Vencedora? (%2.f) \n", VencedorsuperPoder);
  
   return 0;

}
