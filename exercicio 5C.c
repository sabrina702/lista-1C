#include <stdio.h>

int main(){
	float cel,fah;
	printf(" Informe a temperatura em Celsius: ");
	scanf("%f",&cel);
	 fah =(9*cel+160)/5;
	printf("Temperatura em Fahrenheit: %.2f",fah);
	return 0;
}