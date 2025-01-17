#include <stdio.h>
int main(){
    float pedro,geovana,silvana,valor_da_entrada = 0;// compra do apartamento
    float apartamento_total;// valor apartamento
    float porcentagem_1,porcentagem_2,porcentagem_3,porcentagem_total = 0;// porcentagem para cada pessoa 
    float quanto_falta_para_pagar = 0;// valor que falta para pagar
    printf("pedro");
    scanf("%f",&pedro);
    printf("geovana");
    scanf("%f",&geovana);
    printf("silvana");
    scanf("%f",&silvana);
    printf("apartamento_total");
    scanf("%f",&apartamento_total);
    valor_da_entrada = (float) (pedro,geovana,silvana);
    porcentagem_1 = (float) (pedro/valor_da_entrada);
    porcentagem_2 = (float) (geovana/valor_da_entrada);
    porcentagem_3 = (float) (silvana/valor_da_entrada);
    quanto_falta_para_pagar = (float) (apartamento_total - valor_da_entrada);
    printf ("quanto falta para pagar %.2f\n",quanto_falta_para_pagar);
    printf("pedro deu entrada de %.2f que corresponde a %.2f\n",pedro,porcentagem_1);
    printf("geovana deu entrada de %.2f que corresponde a %.2f\n",geovana,porcentagem_2);
    printf("silvana deu entrada de %.2f que corresponde a %.2f\n",silvana,porcentagem_3);
    return 0;
}