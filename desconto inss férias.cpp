#include <stdio.h>
#include <windows.h>
int main(){
 
    int d,resp,dep;
	float s,in,ir;
    do{
    	
	printf("Inserir o valor dos Proventos\n");
	scanf("%f",&s);
	system("cls");
	printf("Inserir os dias de ferias no mes\n");
	scanf("%i",&d);
	system("cls");
	s=s/30*d;
	
	if(s<=1212.00){in=s*0.075;}
	else if((s>1212.00)&&(s<=2427.35))
	{in=s*0.09-18.18;}
	else if((s>2427.35)&&(s<=3641.03))
	{in=s*0.12-91.00;}
	else if((s>3641.03)&&(s<=7087.22))
	{in=s*0.14-163.82;}
	else if(s>7087.23){in=828.39;}
	
	printf("Valor p/ desconto R$%.2f\n\n",in);
	printf("1 - Caucular INSS\n");
	printf("2 - Caucular IRRF\n");
	printf("3 - Sair\n");
	scanf("%d",&resp);
	system("cls");
	
	}while(resp==1);
	
	if(resp==2){
	printf("Informe o numero de dependentes do funcionario\n");
	scanf("%i",&dep);
	dep=189.89*dep;}
	else
	if((s>1903.99) && ( s<=2826.65))
	{ir=s*0.075-in-dep-142.80;}
	else if((s>2826.66) && (s<=3754.05))
	{ir=s*0.15-in-dep-354.80;}
	else if((s>3751.06) && (s<=4664.68))
	{ir=s*0.225-in-dep-636.13;}
	else if(s>4664.68)
	{ir=s*0.275-in-dep-869.36;}

	printf("Valor p/ desconto IRRF R$%.2f\n\n",ir);
	
	return 0;
} 
