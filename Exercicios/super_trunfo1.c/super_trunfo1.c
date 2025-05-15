#include <stdio.h>

int main() {

    // Carta número 1 

    char Estado[20];
    char Codigo_da_Carta[20];
    char Nome_da_Cidade[20];
    float População;
    float Área;
    float PIB;
    char Numero_de_Pontos_Turisticos[20];

    printf("Digite o estado da sua carta: \n");
    scanf("%19s", Estado);  // Limita para 19 caracteres + '\0'

    printf("Digite o código da sua carta: \n");
    scanf("%19s", Codigo_da_Carta); // Limita para 19 caracteres + '\0'
   
    printf("Digite o Nome da Cidade: \n");
    scanf("%19s", Nome_da_Cidade); // Limita para 19 caracteres + '\0'
   
    printf("Digite a População da Cidade: \n");
    scanf("%f", População);  

    printf("Digite a Área da Cidade: \n");
    scanf("%f", Área);  
    
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", PIB);  // Note o %lf para double
   
    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%19s", Numero_de_Pontos_Turisticos);  // Limita para 19 caracteres + '\0'
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", Codigo_da_Carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("População: %f\n", População);
    printf("Área: %f\n", Área);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);



    return 0;
}
