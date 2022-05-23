#include <stdio.h>

int main(){
	float a,b,c,mult,X,resul;
	printf("Informe tres valores: ");
	scanf("%f%f%f",&a,&b,&c);
	printf("Informe o divisor:");
	scanf("%f",&X);
	mult = a*b*c;
	resul = mult/X;
	printf("Resultado: %.2f",resul);
	return 0;
}