//Aprendendo como usar "CHAR" para receber e retornar informações!
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese");
	char nome[30]; //O numero entre colchetes é o tanto de caracteres que poderão ser digitados
	int idade=0; //Variavel inteira para numeros
	printf("Digite seu nome: "); gets(nome); //Recebe informação
	printf("Digite sua idade: "); scanf(" %i", &idade);
	printf("Olá %s, sua idade é %i!", nome, idade); //Retorna informação.
	return 0;
}
