#include <stdio.h>
int main(void)
{
	char nome[61];
	printf("Digite seu nome: ");
	gets(nome);
  int hdia, ndia;
  int hmes, nmes;
  int hano, nano;
  int dia, mes, ano;
  int diferenca;
  
  hdia = 0;
  ndia = 0;
  hmes = 0;
  nmes = 0;
  hano = 0;
  nano = 0;

  printf("%s","Por favor informe a data de ""hoje!\n");
  printf("%s","[dd mm aaaa]: ");
  scanf(" %d%d%d", &hdia, &hmes, &hano);
  printf("              %2d/%2d/%3d\n\n", hdia, hmes, hano);
  
  printf("%s","Por favor informe a data de ""nascimento!\n");
  printf("%s","[dd mm aaaa]: ");
  scanf(" %d%d%d", &ndia, &nmes, &nano);
  printf("              %2d/%2d/%3d\n\n", ndia, nmes, nano);

  diferenca =   365*hano + 30*hmes + hdia
              - 365*nano - 30*nmes - ndia;
  
  ano = diferenca/365;
  diferenca = diferenca%365;
  
  mes = diferenca/30;
  diferenca = diferenca%30;
  
  dia = diferenca;
  printf("%s ", nome);
  printf("%s %d %s %d %s %d %s",
          " Tem Idade Atual de:", ano, "ano(s),", mes, "mes(es) e", dia, "dia(s).\n");
  return 0;
}
