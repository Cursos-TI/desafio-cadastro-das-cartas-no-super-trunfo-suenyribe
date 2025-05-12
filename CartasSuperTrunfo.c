#include <stdio.h>

int main() {
    // Primeira carta
    char codigo1[4]; 
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // segunda carta 
    char codigo2 [4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Coletando dados da primeira carta 
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%d", &populacao1 );
    printf("Área:");
    scanf("%f", &area1);
    printf("PIB:");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:");
    scanf("%d", &pontos1);

    //Coletando dados da segunda carta
    printf("|\nCadrasto da segunda carta:\n");
    printf("Código (ex: B02):");
    scanf("%s", codigo2);
    printf("População:");
    scanf("%d", &populacao2);
    printf("Área:");
    scanf("%f", &area2);
    printf("PIB:");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:");
    scanf("%d", &pontos2);
    
    // Exibindo dados das cartas 
    printf("\n---Carta1---\n");
    printf("Código:%s\n",codigo1);
    printf("População:%d\n",populacao1);
    printf("Área:%.2f\n",area1);
    printf("PIB:%.2f\n",pib1);
    printf("Pontos turísticos:%d\n",pontos1);

    printf("\n---Carta2---\n");
    printf("Código:%s\n",codigo2);
    printf("População:%d\n",populacao2);
    printf("Área:%.2f\n",area2);
    printf("PIB:%.2f\n",pib2);
    printf("Pontos turísticos:%d\n",pontos2);



    
    return 0;
}


