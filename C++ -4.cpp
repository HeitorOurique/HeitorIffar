//Aprendendo como usar "CHAR" para receber e retornar informa��es!
#include<stdio.h>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "portuguese");
	char nome[30]; //O numero entre colchetes � o tanto de caracteres que poder�o ser digitados
	int idade=0; //Variavel inteira para numeros
	printf("Digite seu nome: "); gets(nome); //Recebe informa��o
	printf("Digite sua idade: "); scanf(" %i", &idade);
	printf("Ol� %s, sua idade � %i!", nome, idade); //Retorna informa��o.
	return 0;
}
