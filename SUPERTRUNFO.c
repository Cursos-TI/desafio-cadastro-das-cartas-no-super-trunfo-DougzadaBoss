#include <stdio.h>
int main(){
    //Definição das váriaveis
    int codigo_da_cidade;
    char nome[40];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //inicio da cadeia de comando interativa para coletar dados do usuário
    printf("Olá, bem vindo ao super trunfo. Para começar digite o nome da cidade:\n");
    scanf("%s",&nome);
    
    printf("Agora por favor digite o código da cidade:\n");
    scanf("%d",&codigo_da_cidade);
    
    printf("Agora digite a população da cidade:\n");
    scanf(" %f", &populacao);
    
    printf("Agora por favor digite o PIB da cidade:\n"); 
    scanf(" %f", &pib);
    
    printf("Digite agora a área da cidade:\n");
    scanf(" %f", &area);
    
    printf("E por último digite agora os pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //exibição dos dados coletados em tela
    printf("Nome da cidade: %s\n",nome);
    printf("O código da cidade é: %d\n",codigo_da_cidade);
    printf("A população total da cidade é: %f\n", populacao);
    printf("O PIB da cidade é: %f\n", pib);
    printf("A área total da cidade é: %f\n", area);
    printf("A quantidade de pontos turísticos são: %d\n", pontos_turisticos);

    
return 0;
}