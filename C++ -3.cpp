//Calculando Um valor com um desconto de 22%, e com pagamento a vista um desconto de 15%
#include<stdio.h>
#include<locale.h>
int main (){
setlocale(LC_ALL, "portuguese");
float preco, valor, aumento, avista; //Variavel flutuante
   printf("\n Digite o pre�o: "); scanf("%f",&preco); //Recebendo informa��o
   printf("\n O preco com desconto de 22%% � %.2f", preco + preco*0.22); //Retornando informa��o
   printf("\n O pre�o com desconto para pagamento a vista �: %.2f", preco-preco*0.15); 
	return 0;
}


