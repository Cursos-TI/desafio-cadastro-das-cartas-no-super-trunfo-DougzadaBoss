#include <stdio.h>
int main(){

//definição das variáveis para jogar o super trunfo

     int codigo_cidade;
     char nome;
     float populacao;
     float area;
     float pib;
     int pontos_turisticos;

     //inicio da cadeia de comando interativa para captar dados do usuário

     printf("Olá, bem vindo ao super trunfo, para começar digite o nome da cidade:\n");
     scanf("%s",&nome);

     printf("Agora por favor digite o código da cidade:\n");
     scanf("%d",&codigo_cidade);

     printf("Agora digite a população da cidade:\n");
     scanf("%f",&populacao);

     printf("Agora por favor digite o PIB da cidade:\n");
     scanf("%f",&pib);

     printf("Digite agora a área da cidade:\n");
     scanf("%f",&area);

     printf("E por último digite agora os a quantidade de pontos turísticos na cidade:\n");
     scanf("%d",&pontos_turisticos);

     //exibição dos dados do usuário

     printf("Nome da cidade:%s", nome);



return 0;
}