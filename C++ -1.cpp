#include <stdio.h> //biblioteca
#include <locale.h> //biblioteca
main()
{
  setlocale(LC_ALL, "Portuguese");
  //Adicionando variavel
   float raio, pi, area;
   //Recebendo informação do computador
   printf("Digite o PI: "); scanf(" %f", &pi);
   printf("Digite o raio do circulo: "); scanf(" %f", &raio);
   //Calculo da área
   area = pi * raio * raio;
   //Retornando a informação recebida e calculada.
   printf("Considerando raio igual a %f, e pi igual a %f\n sua area é de: %f", raio, pi, area);
    return 0;
}
