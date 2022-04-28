//Calculando Um valor com um desconto de 22%, e com pagamento a vista um desconto de 15%
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL, "portuguese");
float preco, valor, aumento, avista; //Variavel flutuante
   printf("\n Digite o preço: "); scanf("%f",&preco); //Recebendo informação
   printf("\n O preco com desconto de 22%% é %.2f", preco + preco*0.22); //Retornando informação
   printf("\n O preço com desconto para pagamento a vista é: %.2f", preco-preco*0.15); 
	return 0;
}


