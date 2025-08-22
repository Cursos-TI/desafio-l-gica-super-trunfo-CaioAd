#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; 
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float denpop1, denpop2, pibcap1, pibcap2; 
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
	printf("\n PRIMEIRA CARTA \n");

	printf("Estado (A-H):");
	scanf(" %c", &estado1);

	printf("Código:");
	scanf("%s", codigo1);

	printf("Nome da Cidade:");
	scanf("%s", cidade1);

	printf("População:");
	scanf("%lu", &populacao1);
	
	printf("Área em km²:");
	scanf("%f", &area1);

	printf("PIB:");
	scanf("%f", &pib1);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos1);


	printf("\n SEGUNDA CARTA\n");

	printf("Estado (A-H):");
	scanf(" %c", &estado2);

	printf("Código:");
	scanf("%s", codigo2);

	printf("Nome da Cidade:");
	scanf("%s", cidade2);

	printf("População:");
	scanf("%lu", &populacao2);
	
	printf("Área em km²:");
	scanf("%f", &area2);

	printf("PIB:");
	scanf("%f", &pib2);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos2);

    // Cálculo de densidade populacional.
    denpop1 = (float)populacao1 / area1;
    denpop2 = (float)populacao2 / area2;

    // Cálculo do PIB per capita.
    pibcap1 = pib1 * 1000000000.0f / (float)populacao1;
    pibcap2 = pib2 * 1000000000.0f / (float)populacao2;

    // Exibindo as cartas.
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f PIB/hab\n", pibcap1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f PIB/hab\n", pibcap2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacao1 < populacao2) {
        printf("REsultado: Carta 1 (%s) Venceu!", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) Venceu!", cidade2);
    }
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("\n Comparação de cartas (Atributo: população): \n");

    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);
    return 0;
}