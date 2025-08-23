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
	int populacao1, populacao2, pontos1, pontos2;
	float area1, area2, pib1, pib2;
	float denpop1, denpop2, pibcap1, pibcap2; 

    // Menu de opção.
    int escolha;
    
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
	scanf("%d", &populacao1);
	
	printf("Área em km²:");
	scanf("%f", &area1);

	printf("PIB:");
	scanf("%f", &pib1);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos1);


	printf("\n SEGUNDA CARTA \n");

	printf("Estado (A-H):");
	scanf(" %c", &estado2);

	printf("Código:");
	scanf("%s", codigo2);

	printf("Nome da Cidade:");
	scanf("%s", cidade2);

	printf("População:");
	scanf("%d", &populacao2);
	
	printf("Área em km²:");
	scanf("%f", &area2);

	printf("PIB:");
	scanf("%f", &pib2);

	printf("Número de Pontos Turísticos:");
	scanf("%d", &pontos2);

	// Cálculo de densidade populacional.
	denpop1 = populacao1 / area1;
	denpop2 = populacao2 / area2;

	// Cálculo do PIB.
	pibcap1 = pib1 / populacao1;
	pibcap2 = pib2 / populacao2;

    // Exibir calculos.
    printf("Densidade populacional 1: %.2f hab/km2\n", denpop1);
    printf("Densidade populacional 2: %.2f hab/km2\n", denpop2);
    printf("PIB per capita 1: %.2f PIB/hab \n", pibcap1);
    printf("PIB per capita 2: %.2f PIB/hab \n", pibcap2);

    // Menu interativo.
    printf("\n MENU DE COMPARAÇÃO \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade populacional\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha);

    printf("\n RESULTADO DA COMPARAÇÃO \n");

    switch (escolha) {
        case 1: // População.
        printf("Comparação por população: \n");
        printf("%s: %d habitantes \n", estado1, populacao1);
        printf("%s: %d habitantes \n", estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Vencedor: %s\n", estado1);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: %S\n", estado2);
    } else {
        printf("Empate! \n");
    } break;

        case 2: // Área.
        printf("Comparação de Área: \n");
        printf("%s: %.2f km2 \n", estado1, area1);
        printf("%s: %.2f km2 \n", estado2, area2);

    if (area1 > area2) {
        printf("Vencedor: %s\n", estado1);
    } else if (area2 > area1) {
        printf("Vencedor: %S\n", estado2);
    } else {
        printf("Empate! \n");
    } break;

        case 3: // PIB.
        printf("Comparação de PIB: \n");
        printf("%s: %.2f bilhões \n", estado1, pib1);
        printf("%s: %.2f bilhões \n", estado2, pib2);

    if (pib1 > pib2) {
        printf("Vencedor: %s\n", estado1);
    } else if (pib2 > pib1) {
        printf("Vencedor: %S\n", estado2);
    } else {
        printf("Empate! \n");
    } break;

        case 4: // Numero de pontos turisticos.
        printf("Comparação por população: \n");
        printf("%s: %d pontos \n", estado1, pontos1 );
        printf("%s: %d pontos \n", estado2, pontos2);

    if (pontos1 > pontos2) {
        printf("Vencedor: %s\n", estado1);
    } else if (pontos2 > pontos1) {
        printf("Vencedor: %S\n", estado2);
    } else {
        printf("Empate! \n");
    } break;

    case 5: // Densidade populacional.
        printf("Comparação por população: \n");
        printf("%s: %.2f hab/km2 \n", estado1, denpop1);
        printf("%s: %.2f hab/km2 \n", estado2, denpop2);

    if (denpop1 > denpop2) {
        printf("Vencedor: %s\n", estado1);
    } else if (denpop1 > denpop2) {
        printf("Vencedor: %S\n", estado2);
    } else {
        printf("Empate! \n");
    } break;
   }

    return 0;
}