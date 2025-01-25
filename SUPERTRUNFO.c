#include <stdio.h>
int main(){
    //Definição das váriaveis
    int codigo_da_cidade;
    char nome[40];
    int populacao;
    int area;
    int pib;
    int pontos_turisticos;
    float densidade,pib_percapta;

    //inicio da cadeia de comando interativa para coletar dados do usuário
    printf("Olá, bem vindo ao super trunfo. Para começar digite o nome da cidade:\n");
    scanf("%s",&nome);
    
    printf("Agora por favor digite o código da cidade:\n");
    scanf("%d",&codigo_da_cidade);
    
    printf("Agora digite a população da cidade:\n");
    scanf(" %d", &populacao);
    
    printf("Agora por favor digite o PIB da cidade:\n"); 
    scanf(" %d", &pib);
    
    printf("Digite agora a área da cidade:\n");
    scanf(" %d", &area);
    
    printf("E por último digite agora os pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos);

    //exibição dos dados coletados em tela
    printf("Nome da cidade: %s\n",nome);
    printf("O código da cidade é: %d\n",codigo_da_cidade);  
    printf("A população total da cidade é: %d\n", populacao);
    printf("O PIB da cidade é: %d\n", pib);
    printf("A área total da cidade é: %d\n", area);
    printf("A quantidade de pontos turísticos são: %d\n", pontos_turisticos); 

     densidade =(float) populacao / area;
    printf("A densidade populacional é %f",densidade);
    
    pib_percapta = (float)pib / populacao;

    printf("O PIB percapta é: %f", pib_percapta);
    
return 0;
}