
#include <stdio.h>

float parteDecimal(float);

int main(void)
{
	float numero;
	printf("Ingrese un numero real: ");
	scanf("%f", &numero);
	
	printf("\nLa parte decimal del numero ingresado es: %.4f", parteDecimal(numero));
	
	getchar();
	return 0;
}

float parteDecimal(float numero)
{
	return (numero - ((int)numero) );
}
