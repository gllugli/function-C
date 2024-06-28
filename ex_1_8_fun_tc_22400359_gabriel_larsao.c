/*Faça um programa que eleve um inteiro x à um potência inteira y. 
O programa deverá receber os dois números, chamar a função que calcula a potenciação e ao final exibir os resultados*/


#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	int x, y;
	
	printf("\nQual será o número da base? \nResposta: ");
	scanf("%d", &x);
	
	printf("\nQual será o radicando? \nResposta: ");
	scanf("%d", &y);
	
	printf("\n%d elevado a %d é igual a %d", x, y, potencia(x, y));
	
	return 0;
}

int potencia(int x, int y) {
	
	int resultado;
	
	resultado = pow(x, y);
	
	return(resultado);
}
