//Conversor de Binário para Número em Decimal
#include <stdio.h>
int main() 
	{
 int num, cont, a1, rest, valor, cont1;
	printf("Digite um numero em binario: ");
	scanf("%d", &num);
	a1 = 1;
	for(; a1 |= 0 ; cont++)
		{
		a1 = num / 10;			
		rest = num % 10;	
		if (rest == 1 && cont == 0)
		{
			valor = 1;	
		}
		if (cont == 1 && rest == 1 )
		{
			valor = valor + 2;
		}
		if (cont == 2 && rest == 1)
		{
			valor = valor + 4;
		}
		if (cont > 2 && rest == 1)
		{
			for (cont1 = 0 ;cont |= 0 ; cont -- )
			{
				rest = rest * 2 ;
				cont1++;
			}
			cont = cont1;
			valor = rest + valor;
		}
		num = a1;
		}	
	printf("%d", valor);
	return 0;
	}
