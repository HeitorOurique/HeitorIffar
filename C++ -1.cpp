#include <stdio.h> //biblioteca
#include <locale.h> //biblioteca
main()
{
  setlocale(LC_ALL, "Portuguese");
  //Adicionando variavel
   float raio, pi, area;
   //Recebendo informa��o do computador
   printf("Digite o PI: "); scanf(" %f", &pi);
   printf("Digite o raio do circulo: "); scanf(" %f", &raio);
   //Calculo da �rea
   area = pi * raio * raio;
   //Retornando a informa��o recebida e calculada.
   printf("Considerando raio igual a %f, e pi igual a %f\n sua area � de: %f", raio, pi, area);
    return 0;
}
