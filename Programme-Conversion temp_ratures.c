#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int conversiona(float f, float d){

	d=0.55556*(f-32);

	return d;
}

int conversionb(float f, float d){

	f=((d/0.55556)+32);

	return f;
}


int main(int argc, char const *argv[])
{
	int v=0;
	printf("Ce programme permet de convertir les températures de Fahrenheit en Celsius et inversement.\nEntrez 1 ou 2 pour choisir le type de conversion que vous souhaitez opérer:\n\n1- Fahrenheit en Celsius\n2- Celsius en Fahrenheit");
	scanf("%d", &v);

	switch v 
	{
		case 1
		printf("Vous avez choisit la conversion de Fahrenheit en Celsius.");
		break;

		case 2
		printf("Vous avez choisit la conversionde Celsius en Fahrenheit.\n");
		break;
	}

	if v==1{
		float a=0, b=0, c=0;
		printf("Entrez la tempéreture en Fahrenheit: \n");
		scanf("%f", %a);
		c=conversiona(a,b);

		printf("La température que voua avez entrée conrespond à %f degrés en Celsius.\n", c);

		return 0;
	}
	else{
		float a=0, b=0, c=0;
		printf("Entrez la tempéreture en Celsius: \n");
		scanf("%f", %b);
		c=conversionb(b,a);

		printf("La température que voua avez entrée conrespond à %f degrés en Celsius.\n", c);

		return 0;
	}
	





	float a=0, b=0, c=0;
	printf("Entrez la tempéreture en Fahrenheit: \n");
	scanf("%f", %a);
	c=conversion(a,b);

	printf("La température que voua avez entrée conrespond à %f degrés en Fahrenheit.\n", );

	return 0;
}

