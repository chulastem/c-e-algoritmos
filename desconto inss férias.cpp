#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <windows.h>

int main() {
    int dias, resp;
    float salario, inss;
    do{
    printf(" Insira o valor dos proventos\n");
    scanf("%f",&salario);
    system("cls");
    printf("Insira a quantidade de dias de ferias no mes de saida\n");
    scanf("%i",&dias);
    system("cls");
    salario=salario/30*dias;
    if(salario<=1212.00){
        inss=salario*0.075;
    }
    else if((salario>1212.00) && (salario<=2427.35)){
        inss=salario*0.09-18.18;
    }
    else if((salario>2427.35) && (salario<=3641.03)){
        inss=salario*0.12-91.00;
    }
    else if((salario>3641.03) && (salario<=7087.22)){
        inss=salario*0.14-163.82;
    }
    else if(salario>7087.23){
        inss=828.39;
    }
    printf("O valor a descontar de INSS e R$%.2f\n\n",inss);
    printf("(1)- Caucular novamente\n");
    printf("(2)- Sair\n");
    scanf("%d", &resp);
    system("cls");
   }while (resp==1);
    return 0;
}
