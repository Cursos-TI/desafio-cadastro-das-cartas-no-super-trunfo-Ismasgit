#include <stdio.h> 


int main() {
    char nome [20];
    int turismo; 
    double PIB;
    double area;
    float populacao; 


    printf("Digite o nome da cidade:  \n");
    scanf("%s", nome);

    printf("Digite o PIB da cidade:  \n");
    scanf("%lf",  &PIB);

    printf("Digite o numero de pontos turisticos:  \n");
    scanf("%d", &turismo);

    printf("Qual o número de habitantes?:  \n");
    scanf("%f", &populacao);

    printf("Tamanho da cidade em m²:   \n");
    scanf("%lf", &area);

    printf("Cidade: %s  \n", nome);
    printf("Valor PIB: %lf  \n", PIB);
    printf("Área em metros²: %lf  \n", area);
    printf("Quantidade de pontos turísticos: %d  \n", turismo);
    printf("Número de habitantes: %f  \n", populacao);
    



}
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
