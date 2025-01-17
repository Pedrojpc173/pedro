#include <stdio.h>
int main(){
    float pedro,vini,douglas,total_aposta;// apostadores
    float premio =0 ;// vallor do premio
    float porcentagem_1,porcentagem_2,porcentagem_3,porcentagem_total;// porcentagem para cada pessoa 
    float premio1,premio2,premio3, total_premio =0;// valor do premio
    printf("pedro");
    scanf("%f",&pedro);
    printf("vini");
    scanf("%f",&vini);
    printf("douglas");
    scanf("%f",&douglas);
    printf("premio");
    scanf("%f",&premio);
    total_aposta = (pedro+vini+douglas);
    printf("total_aposta%.2f\n",total_aposta);
    porcentagem_1 = (float) (pedro/total_aposta);
    porcentagem_2 = (float) (vini/total_aposta);
    porcentagem_3 = (float) (douglas/total_aposta);
    porcentagem_total= (float) (porcentagem_1+porcentagem_2+porcentagem_3);
    printf("porcentagem_total e %.2f\n",porcentagem_total);
    premio1 = (float) (premio*porcentagem_1);
    premio2 = (float) (premio*porcentagem_2);
    premio3 = (float) (premio*porcentagem_3);
    total_premio = (float) (premio1+premio2+premio3);
    printf ("total_premio %.2f\n",total_premio);
    printf("pedro pagou %.2f que corresponde a %.2f e pode pegar premio de %.2f\n",pedro,porcentagem_1,premio1);
    printf("vini pagou %.2f que corresponde a %.2f e pode pegar premio de %.2f\n",vini,porcentagem_2,premio2);
    printf("douglas pagou %.2f que corresponde a %.2f e pode pegar premio de %.2f\n",douglas,porcentagem_3,premio3);
    return 0;
}
