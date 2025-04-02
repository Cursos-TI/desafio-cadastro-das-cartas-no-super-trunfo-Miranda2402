#include <stdio.h>

int main () {
    /* 
    ~ MODELO DE INFORMAÇÕES ~
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */

    // Variavel da primeira carta
    char Estado1[1], Codigo1[3], Cidade1[15];
    int População1, Pontos_Turisticos1;
    float Area1, PIB1;

    // Variavel da segunda carta
    char Estado2[1], Codigo2[3], Cidade2[15];
    int População2, Pontos_Turisticos2;
    float Area2, PIB2;

    // Intruções
    printf("\n~ MODELO DE CARTA ~\n\nEstado: A\nCodigo: A01\nNome da Cidade: SaoPaulo (sem espaco, escrever tudo junto)\nPopulacao: 12325000 (sem espacos, ou caracter especial (. ; ,))\nArea: 1521.11 (sem espacos, ou caracter especial (. ; ,)\nPIB: 699.28 (sem espacos, ou caracter especial (. ; ,)\nNumero de Pontos Turisticos: 50\n");

    // Inclusão da carta 
    printf("===============================================\n\n");
    printf("\n\nPreencha as inforamcoes da primeira carta:\n");
    printf("CARTA 1:\n");
    printf("Informe o estado: ");
    scanf("%s", &Estado1);
    printf(" \n");

    printf("Informe o codigo: ");
    scanf("%s", &Codigo1);
    printf(" \n");

    printf("Informe nome da cidade: ");
    scanf("%s", &Cidade1);
    printf(" \n");

    printf("Informe a Populacao: ");
    scanf("%d", &População1);
    printf(" \n");

    printf("Informe o tamanho da area: ");
    scanf("%f", &Area1);
    printf(" \n");

    printf("Informe o PIB: ");
    scanf("%f", &PIB1);
    printf(" \n");

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos1);
    printf(" \n");

    // Inclusão da carta 2
    printf("===============================================\n\n");
    printf("Agora preencha as inforamcoes da segunda carta:\n\n");
    printf("CARTA 2:\n\n");
    printf("Informe o estado: ");
    scanf("%s", &Estado2);
    printf(" \n");

    printf("Informe o codigo: ");
    scanf("%s", &Codigo2);
    printf(" \n");

    printf("Informe nome da cidade: ");
    scanf("%s", &Cidade2);
    printf(" \n");

    printf("Informe a Populacao: ");
    scanf("%d", &População2);
    printf(" \n");

    printf("Informe o tamanho da area: ");
    scanf("%f", &Area2);
    printf(" \n");

    printf("Informe o PIB: ");
    scanf("%f", &PIB2);
    printf(" \n");

    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &Pontos_Turisticos2);
    printf(" \n");

    // Exibição da carta 1 e 2
    printf("Carta 1:\n\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", População1);
    printf("Area: %f Km²\n", Area1);
    printf("PIB: R$:%f\n", PIB1);
    printf("Pontos Turisticos: \n", Pontos_Turisticos1);

    printf("Carta 2:\n\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", População2);
    printf("Area: %f Km²\n", Area2);
    printf("PIB: R$:%f\n", PIB2);
    printf("Pontos Turisticos: \n", Pontos_Turisticos2);

    return 0;

}
