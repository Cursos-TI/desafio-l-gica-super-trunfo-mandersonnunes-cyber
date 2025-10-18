#include <stdio.h>

int main() {
    // VARIÁVEIS CARTA 1
    char estado1[10], codigo1[5], cidade1[20];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibpercapita1, superpoder1;

    // VARIÁVEIS CARTA 2
    char estado2[10], codigo2[5], cidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibpercapita2, superpoder2;

    // --- CARTA 1 ---
    printf("Primeira carta:\n");
    printf("Selecione uma letra de A a H: \n");
    scanf(" %s", estado1);

    printf("Digite o codigo do seu estado: \n");
    scanf(" %s", codigo1);

    printf("Digite sua cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Qual é a sua população? \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem na sua cidade? \n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1.0f / densidade1);


//----- RESULTADO DA CARTA NUMERO 1 ----- 

printf("CARTA NUMERO 1 \n") ;
printf("estado: %s \n", estado1) ;
printf("Codigo da carta: %s \n", codigo1);
printf("cidade: %s \n", cidade1) ;
printf("População: %d \n", populacao1) ;
printf("área: %.2f km² \n", area1) ;
printf("Pib: %.2f bilhões de reais \n", pib1) ;
printf("pontosturísticos: %d \n", pontos1) ;
printf("Densidade Populacional: %2.fhab/km² \n", densidade1) ;
printf("PIB per Capita: %2.f reais \n", pibpercapita1) ;









    // --- CARTA 2 ---
    printf("\nSegunda carta:\n");
    printf("Selecione uma letra de A a H: \n ");
    scanf(" %s", estado2);

    printf("Digite o codigo do seu estado: \n ");
    scanf(" %s", codigo2);

    printf("Digite sua cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Qual é a sua população? \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: \n ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem na sua cidade? \n ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2; 
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1.0f / densidade2);

//---- RESULTADO DA CARTA NUMERO 2 -----
printf("CARTA NUMERO 2 \n") ;
printf("estado: %s \n", estado2) ;
printf("Codigo da carta: %s \n", codigo2);
printf("cidade: %s \n", cidade2) ;
printf("População: %d \n", populacao2) ;
printf("área: %.2f km² \n", area2) ;
printf("Pib: %.2f bilhões de reais \n", pib2) ;
printf("pontosturísticos: %d \n", pontos2) ;
printf("Densidade Populacional: %2.fhab/km² \n", densidade2) ;
printf("PIB per Capita: %2.f reais \n", pibpercapita2) ;


// ----COMPARAÇÃO DOS ATRIBUTOS---- 
printf("\n") ;
printf("\n") ;
printf("ATRIBUTO PIB: \n") ;
printf("Carta 1: %s %.2f\n" , cidade1, pib1);
printf("Carta 2: %s %.2f\n", cidade2, pib2);

if (pib1 > pib2) {
printf("Carta 1 venceu!: \n") ;    
} else {
printf("Carta 2 venceu \n") ;
}


    // --- COMPARAÇÃO ---
    printf("\n\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);








    return 0;
}
