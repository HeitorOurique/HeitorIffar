#include<stdio.h>
#include<locale.h>
int main () {
	setlocale(LC_ALL, "portuguese"); //Adiciona a linguagem portuguesa
	float num3 = 0, numreal = 0, num4 = 0, num5 = 0; //Variavel flutuante
	int num1 = 0, num2 =0; //Variavel inteira
	printf("Digite um numero: "); scanf(" %i", &num1); //recebendo informação
	printf("Digite outro numero: "); scanf(" %i", &num2);
	printf("Digite um numero real: "); scanf(" %f", &numreal);
	num3 = num1*2 * (num2/2); //Calculos
	num4 = num1 *3 + numreal;
	num5 = numreal*numreal*numreal;
	printf("Tendo como primeiro numero: %.1i e como segundo numero %.1i, e como numero real: %.2f\n O produto do dobro do primeiro com a metade do segundo é: %.2f\n A soma do triplo do primeiro com o terceiro é: %.2f\n O terceiro elevado ao cubo é: %.2f.", num1, num2, numreal, num3, num4, num5); //Retornando a informação recebida.
	return 0;
}
